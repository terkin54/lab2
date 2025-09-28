#include "stdlib.h"
#include "index_first_even.h"
#include "index_last_odd.h"
#include "sum_before_even_and_after_odd.h"
#include "sum_between_even_odd.h"
#include "stdio.h"
#include <string.h>

#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof((arr)[0]))

void task(int what, int* arr, unsigned int size);


int main() {
    int operation, arr[100];
    int n = 0;
    char input[1000];
    
    printf ("Enter operation and array (operation n1 n2 n3 ...): ");
    if (fgets(input, sizeof(input), stdin) == NULL) {
        printf("Ошибка ввода\n");
        return 1;
    }
    
    // Парсим ввод
    char *token = strtok(input, " \n");
    if (token == NULL) {
        printf("Ошибка: пустой ввод\n");
        return 1;
    }
    
    // Читаем операцию
    if (sscanf(token, "%d", &operation) != 1) {
        printf("Ошибка: неверный формат операции\n");
        return 1;
    }
    
    // Читаем массив
    while ((token = strtok(NULL, " \n")) != NULL) {
        if (n >= 100) {
            printf("Ошибка: слишком много элементов\n");
            return 1;
        }
        if (sscanf(token, "%d", &arr[n]) != 1) {
            printf("Ошибка: неверный формат элемента %d\n", n);
            return 1;
        }
        n++;
    }
    
    if (n == 0) {
        printf("Ошибка: массив пустой\n");
        return 1;
    }
    
    task(operation, arr, n);
    return 0;
}
void task(int what, int* arr, unsigned int size) {
    int len = ARRAY_SIZE(&arr);
    switch (what) {
        case 0:
            printf("%d\n",index_first_even(&arr, len));
            return;

        case 1:
            printf("%d\n",index_last_odd(&arr, len));
            return;
        case 2:
            printf("%d\n",sum_between_even_odd(&arr, len));
            return;

        case 3:

            printf("%d\n",sum_before_even_and_after_odd(&arr, len));
            return;

        default:
            puts("Данные некорректны");
        }
}
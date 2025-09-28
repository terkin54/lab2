#include "stdio.h"
// #include "index.h"
#include "index_first_even.h"
#include "index_last_odd.h"
#include "sum_before_even_and_after_odd.h"
#include "sum_between_even_odd.h"

#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof((arr)[0]))
// считать данные с консоли значений 0, 1, 2, 3 и массив целых чисел
// вывести ответ или "Данные некорректны"
// 5 
//1 2 3 4 5
// 0 1 2 3
void task(int what, int* arr, unsigned int size);

int main() {
    int n, arr[100];
    printf("Number of elements: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
        }

    for (int q;;) {
        printf("Action (-1 for quit): ");
        scanf("%d", &q);

        if (q == -1) break;

        task(q, arr, n);
        }
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

#include "stdlib.h"
#include "index_first_even.h"
#include "index_last_odd.h"
#include "sum_before_even_and_after_odd.h"
#include "sum_between_even_odd.h"
#include "stdio.h"

void task(int what, int arr[],  int size);


int main() {
    int operation, arr[100];
    int cnt = 0;
    int arr_size = 0;
    const int max_size = 100;

    if (scanf("%d", &operation) != 1) {
        arr_size = 0;
        return -1;
    }

    while (cnt < max_size && scanf("%d", &arr[cnt]) == 1) {
        cnt++;
        if (getchar() == '\n') break;
    }

    task(operation, arr, cnt);
    return -1;
}

void task(int what, int arr[], int size) {
    switch (what) {
        case 0:
            printf("%d\n",index_first_even(arr, size));
            return;

        case 1:
            printf("%d\n",index_last_odd(arr, size));
            return;
        case 2:
            printf("%d\n",sum_between_even_odd(arr, size));
            return;

        case 3:
            printf("%d\n",sum_before_even_and_after_odd(arr, size));
            return;

        default:
            puts("Данные некорректны");
        }
}
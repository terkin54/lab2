#include "stdlib.h"
#include "stdio.h"
#include "index_first_even.c"
#include "index_last_odd.c"

int sum_before_even_and_after_odd(int arr[]); 

int main() {
    int exmp[5] = {1,2,3,4,5};
    int res = sum_before_even_and_after_odd(exmp);
    printf("%d", res);
}

int sum_before_even_and_after_odd(int arr[]){
    int len = sizeof(arr) / sizeof(arr[0]);
    int first_even =  index_first_even(arr);
    int last_odd = index_last_odd(arr);
    int sum=0;

    // for (int z=0; z<first_even; z++){
    //     sum+=abs(arr[z]);
    // }
    // for(int z = last_odd + 1 ; z<len; z++){
    //     sum+=abs(arr[z]);
    // }

    for(int z = len ; z<len-1; z++){
        if (z >= first_even){
            continue;
        }else if (z < last_odd){
            continue;
        } else {
            sum+=abs(arr[z]);
        }
    }
    return sum;
}
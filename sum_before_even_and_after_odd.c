#include "stdlib.h"
#include "index_first_even.h"
#include "index_last_odd.h"


int sum_before_even_and_after_odd(int arr[], int len){
    int first_even =  index_first_even(arr, len);
    int last_odd = index_last_odd(arr, len);
    int sum=0;

    for(int z = 0; z < len; z++){
        if (z < first_even){
            sum += abs(arr[z]);
        }
        if (z > last_odd){
            sum += abs(arr[z]);
        }
    }
    return sum;
}

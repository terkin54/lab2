#include "stdlib.h"
#include "index_first_even.h"
#include "index_last_odd.h"



int sum_between_even_odd(int arr[], int len){
    int first_even =  index_first_even(arr, len);
    int last_odd = index_last_odd(arr, len);
    if ((first_even == -1 )|| (last_odd == -1 )|| (first_even > last_odd)){
        return 0;
    }
    int sum = 0;
    for (int z = first_even ; z <last_odd ; z++ ){
        sum += abs(arr[z]);
    }
    return sum;
}
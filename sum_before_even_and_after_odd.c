#include "stdlib.h"
#include "index_first_even.k"
#include "index_last_odd.h"


// int main() {
//     int exmp[5] = {3,2,1,4,7};
//     int len = ARRAY_SIZE(exmp);
//     int res = sum_before_even_and_after_odd(exmp, len);
//     printf("%d", res); 
// }

int sum_before_even_and_after_odd(int arr[], int len){
    int first_even =  index_first_even(arr, len);
    int last_odd = index_last_odd(arr, len);
    int sum=0;
    
    printf("Debug: len=%d, first_even=%d, last_odd=%d\n", len, first_even, last_odd);

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
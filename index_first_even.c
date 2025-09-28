
int index_first_even(int arr[]) {
    int len = sizeof(arr) / sizeof(arr[0]);
    for (int z=0; z< len; z++){
        if (arr[z]%2==0){
            return z;
        }
    }
    return -1;
}
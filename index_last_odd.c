int index_last_odd(int arr[]){
    int len = sizeof(arr) / sizeof(arr[0]);
    for (int z = len - 1; z>=0; z--){
        if (arr[z]%2!=0){
            return z;
        }

    }
    return -1;
}
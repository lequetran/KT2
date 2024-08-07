#include <stdio.h>


int arraySum(int arr[], int n) {
    if (n <= 0) return 0; 
    return arraySum(arr, n - 1) + arr[n - 1];
}

int main() {
    int arr[] = { 1, 4, 3, 4, 5 };
    int n = 5;
    int result = arraySum(arr, n);
    printf("Tổng mảng là %d\n", result);
    getchar();
    return 0;
}

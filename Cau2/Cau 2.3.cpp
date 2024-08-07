#include <stdio.h>


int search(int arr[], int n, int x) {
    if (n <= 0) return -1; 
    if (arr[n - 1] == x) return n - 1;
    return search(arr, n - 1, x); 
}

int main() {
    int arr[] = { 1, 2, 3, 4, 5, 6 };
    int n = 6;
    int x = 3;
    int result = search(arr, n, x);
    if (result != -1) {
        printf("Số %d tìm thấy ở vị trí %d\n", x, result);
    }
    else {
        printf("Số %d không tìm thấy trong mảng\n", x);
    }

    getchar();
    return 0;
}

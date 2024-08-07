#include <stdio.h>


int fibonacci(int n) {
    if (n <= 1) return n; 
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n = 5;
    int result = fibonacci(n);
    printf("Số hạng thứ %d của dãy Fibonacci là %d\n", n, result);
    getchar();
    return 0;
}

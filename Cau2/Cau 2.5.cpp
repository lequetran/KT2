#include <stdio.h>


void hanoi(int n, char from_rod, char to_rod, char aux_rod) {
    if (n == 1) {
        printf("Di chuyen dia 1 tu %c den %c\n", from_rod, to_rod);
        return;
    }
    hanoi(n - 1, from_rod, aux_rod, to_rod); 
    printf("Di chuyen dia %d tu %c den %c\n", n, from_rod, to_rod); 
    hanoi(n - 1, aux_rod, to_rod, from_rod); 
}

int main() {
    int n = 3; 
    hanoi(n, 'A', 'C', 'B');
    getchar();
    return 0;
}

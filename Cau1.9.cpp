#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char ten[] = "Le Dang Que Tran";
    int soLan[256] = { 0 };

    for (int i = 0; ten[i] != '\0'; i++) {
        if (isalpha(ten[i])) {
            soLan[(unsigned char)ten[i]]++;
        }
    }

    printf("Thong ke ky tu:\n");
    for (int i = 0; i < 256; i++) {
        if (soLan[i] > 0) {
            printf("%c-%d\n", i, soLan[i]);
        }
    }

    getchar();

    return 0;
}

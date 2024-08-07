#include <stdio.h>
#include <string.h>

int main() {
    char ten[] = "Le Dang Que Tran";
    char tenHo[50];
    char tenCuoi[50];

    char* khoangCach = strrchr(ten, ' ');
    if (khoangCach != NULL) {
        strncpy_s(tenCuoi, khoangCach + 1, sizeof(tenCuoi));
        tenCuoi[sizeof(tenCuoi) - 1] = '\0';
        strncpy_s(tenHo, ten, khoangCach - ten);
        tenHo[khoangCach - ten] = '\0';

        printf("Chuoi moi: %s %s\n", tenCuoi, tenHo);
    }
    getchar();
    return 0;
}

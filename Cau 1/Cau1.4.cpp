#include <stdio.h>
#include <ctype.h>

int main() {
    char ten[] = "Le Dang Que Tran";
    int demsoTu = 0;
    int tu = 0;

    for (int i = 0; ten[i] != '\0'; i++) {
        if (isspace(ten[i])) {
            tu = 0;
        }
        else {
A            if (!tu) {
                demsoTu++;
            }
            tu = 1;
        }
    }

    printf("So tu trong chuoi: %d\n", demsoTu);

    getchar();

    return 0;
}

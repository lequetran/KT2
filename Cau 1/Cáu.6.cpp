#include <stdio.h>
#include <string.h>

int main() {
    char ten[] = "Le Dang Que Tran";
    char ho[50];
    char Ten[50];

    char* tach = strrchr(ten, ' ');
    if (tach != NULL) {
        strncpy_s(Ten, tach + 1, sizeof(Ten));
        Ten[sizeof(Ten) - 1] = '\0';
        strncpy_s(ho, ten, tach - ten);
        ho[tach - ten] = '\0';

        printf("Chuoi 1 (Ho va ten dem): %s\n", ho);
        printf("Chuoi 2 (ten): %s\n", Ten);
    }
    getchar();
    return 0;
}

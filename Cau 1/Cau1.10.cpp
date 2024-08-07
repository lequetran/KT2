#include <stdio.h>
#include <string.h>

int main() {
    char ten[] = "Le Thi Yen Nhi";
    if (strstr(ten, "Van") != NULL) {
        printf("Giới tính: Nam\n");
    }
    else if (strstr(ten, "Thi") != NULL) {
        printf("Giới tính: Nu\n");
    }
    else {
        printf("Không thể xác định giới tính.\n");
    }

    getchar();

    return 0;
}

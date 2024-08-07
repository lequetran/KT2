#include <stdio.h>
#include <ctype.h>

int main() {
    char ten[] = "Le Dang Que Tran";
    int kytuHoa = 0;

    for (int i = 0; ten[i] != '\0'; i++) {
        if (isupper(ten[i])) {
            kytuHoa = 1;
            break;
        }
    }

    if (kytuHoa) {
        printf("Chuỗi chứa ký tự hoa.\n");
    }
    else {
        printf("Chuỗi không chứa ký tự hoa.\n");
    }

    getchar();

    return 0;
}

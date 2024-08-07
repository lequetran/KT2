#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char tens[] = "le dang que tran";
    char chuanHoa[100];
    int i = 0;

   
    for (i = 0; tens[i] != '\0'; i++) {
        chuanHoa[i] = tolower(tens[i]);
    }
    chuanHoa[i] = '\0';

    
    int chuoiHoa = 1;
    for (i = 0; chuanHoa[i] != '\0'; i++) {
        if (isspace(chuanHoa[i])) {
            chuoiHoa = 1;
        }
        else if (chuoiHoa) {
            chuanHoa[i] = toupper(chuanHoa[i]);
            chuoiHoa = 0;
        }
    }

    printf("Chuoi chuan hoa: %s\n", chuanHoa);

    getchar();
    return 0;
}

#include <stdio.h>
#include <stdbool.h>

int main() {
    char ten[] = "Le Dang Que Tran";  
    char ch;                         
    bool found = false;           

    
    printf("Nhap ky tu de kiem tra: ");
    scanf_s(" %c", &ch);  

    


   
    for (int i = 0; ten[i] != '\0'; i++) {
        if (ten[i] == ch) {
            found = true;
            break;
        }
    }

    
    if (found) {
        printf("Ky tu '%c' co trong chuoi.\n", ch);
    }
    else {
        printf("Ky tu '%c' khong co trong chuoi.\n", ch);
    }

    
    printf("Nhan Enter de thoat...");
    getchar();  
    getchar();

    return 0;
}

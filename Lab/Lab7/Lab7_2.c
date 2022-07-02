#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void login();

int main(){
    login();
    return 0;
}

void login(){
    char username[] = "admin";
    char password[] = "admin123";
    char customusername[100];
    char custompassword[100];

    printf("Username: "); gets(customusername);
    printf("Password: "); gets(custompassword);

    if (strcmp(customusername, username) != 0 || strcmp(custompassword, password) != 0){
        printf("Dang Nhap That Bai");
        exit(0);
    }
    printf("Dang Nhap Thanh Cong");
}
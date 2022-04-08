#include <stdio.h>

void dempnam();

int main(){
    dempnam();
    return 0;
}

void dempnam(){
    char string[100];
    printf("Xin moi nhap vao chuoi: "); gets(string);
    int i = 0, p = 0, n = 0;

    while(string[i] != '\0'){
       if (string[i] == 'u' || string[i] == 'e' || string[i] == 'o' ||
       string[i] == 'a' || string[i] == 'i'){
           n++;
       } else {p++;} 
       i++;
    }
    printf("Chuoi '%s' co %d nguyen am va %d phu am!",string,n,p);
}
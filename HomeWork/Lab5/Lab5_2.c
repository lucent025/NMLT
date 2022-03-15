#include <stdio.h>

int main(){
    namnhuan();
    return 0;
}

void namnhuan(){
    int year;
    printf("Nhap vao so nam: ");
    scanf("%d",&year);
    if (year % 4 == 0 && year % 100 != 0){
        printf("Nam %d la nam nhuan!", year);
    } else printf("Nam %d khong phai la nam nhuan!",year);
}
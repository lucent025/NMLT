#include <stdio.h>

int main(){

    int a,b,tong,hieu;
    printf("Nhap vao so a: ");
    scanf("%d",&a);
    printf("Nhap vao so b: ");
    scanf("%d",&b);
    tong = a + b;
    hieu = a - b;
    printf("Tong:\n%d + %d = %d\n",a,b,tong);
    printf("Hieu:\n%d - %d = %d\n",a,b,hieu);
    return 0;
}
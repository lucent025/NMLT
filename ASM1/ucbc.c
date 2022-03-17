#include <stdio.h>

void ucbc();
int uc();

int main(){
    ucbc();
    return 0;
}

void ucbc(){
    int a,b;
    printf("Nhap vao so a: "); scanf("%d",&a);
    printf("Nhap vao so b: "); scanf("%d",&b);
    int c = uc(a,b);
    int d = bc(a,b);
    printf("\nUCLN: %d",c);
    printf("\nBCNN: %d",d);
}

int uc(int a, int b){
    while (a != b){
        if (a > b) {
            a = a-b;
        } else {
            b = b-a;
        }
    }
    a = b;
    return a;
}

int bc(int a, int b){
    int ketqua = uc(a,b);
    return (a * b)/ketqua;
}
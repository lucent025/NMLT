#include <stdio.h>

int main(){
    int *a,*b;
    printf("Nhap vao so a: ");
    scanf("%d",&a);
    printf("Nhap vao so b: ");
    scanf("%d",&b);
    swap(&a,&b);
    printf("so a: %d\n",a);
    printf("so b: %d\n",b);
}

int swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    return a,b;
}
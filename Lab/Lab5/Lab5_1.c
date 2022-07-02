#include <stdio.h>

int main(){
    int so1,so2,so3;
    printf("Nhap vao so thu 1: ");
    scanf("%d",&so1);
    printf("Nhap vao so thu 2: ");
    scanf("%d",&so2);
    printf("Nhap vao so thu 3: ");
    scanf("%d",&so3);
    int soMax = timSoLon(so1,so2,so3);
    printf("So lon nhat la: %d",soMax);
}

int timSoLon(int so1, int so2, int so3){
    int max;
    if (so1 > so2 && so1 > so3){
        max = so1;
    } else if (so2 > so1 && so2 > so3){
        max = so2;
    } else if (so3 > so1 && so3 > so2){
        max = so3;
    }
    return max;
}
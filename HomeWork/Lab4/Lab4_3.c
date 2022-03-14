#include <stdio.h>

int main(){
    sochinhphuong();
    return 0;
}

void sochinhphuong(){
    int n,count = 0;
    printf("Nhap vao so nguyen n: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++){
        if(i * i == n){
            count++;
            break;
        } 
    }
    if (count == 1){
        printf("%d la so chinh phuong",n);
    } else printf("%d khong phai la so chinh phuong",n);
}
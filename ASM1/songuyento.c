#include <stdio.h>
void songuyento();


void songuyento(){
    int n, biendem = 0;
    printf("Nhap vao so n: "); scanf("%d",&n);

    for (int i = 2; i < n; i++){
        if (n % i == 0){
            biendem++;
        }
    }
    if (biendem == 0){
        printf("\n%d la so nguyen to!\n",n);
    } else  {
        printf("\n%d khong phai la so nguyen to!\n",n);
    }
}
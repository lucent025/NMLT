#include <stdio.h>
void songuyento();


void songuyento(){
    int n, biendem = 0;
    printf("\nNhap vao so n: "); scanf("%d",&n);

    for (int i = 2; i < n; i++){
        if (n % i == 0){
            biendem++;
        }
    }
    if (biendem == 0){
        printf("%d la so nguyen to!\n",n);
    } else  {
        printf("%d khong phai la so nguyen to!\n",n);
    }
}
/*
  De chay rieng chuong trinh nay thi hay xoa comment 
tai ham int main().

    LUU Y: Chay chuong trinh xong thi sua lai nhu cu de
Lab3_4.c co the chay binh thuong
                    
                    Xin cam on!
*/
#include <stdio.h>

void ptBac1();

/*
int main(){
    ptBac1();
    return 0;
}
*/

void ptBac1(){

    float hesoA,hesoB,x;

    printf("Phuong trinh bac 1: ax + b = 0\n");
    printf("Nhap he so a: ");
    scanf("%f",&hesoA);
    printf("Nhap he so b: ");
    scanf("%f",&hesoB);
    if (hesoA==0){
        printf("Phuong trinh vo nghiem!\n");
    }
    if (hesoB==0){
        printf("Phuong trinh co vo so nghiem!\n");
    }
    if (hesoB!=0 && hesoA!=0){
        printf("Ta co phuong trinh: %.2fx + %.2f = 0\n", hesoA, hesoB);

        x = (-hesoB)/hesoA;

        printf("Phuong trinh co nghiem x = %.2f\n",x);
    }
}
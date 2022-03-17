/*
  De chay rieng chuong trinh nay thi hay xoa comment 
tai ham int main().

    LUU Y: Chay chuong trinh xong thi sua lai nhu cu de
Lab3_4.c co the chay binh thuong
                    
                    Xin cam on!
*/
#include <stdio.h>
#include <math.h>

void ptBac2();

/*
int main(){
    
    ptBac2();
    return 0;
}
*/

void ptBac2(){
    float hesoA, hesoB, hesoC,x,x1,x2,delta;
    printf("Phuong trinh bac 2: ax\u00B2 + bx + c = 0\n");
    printf("Nhap he so a: ");
    scanf("%f",&hesoA);
    printf("Nhap he so b: ");
    scanf("%f",&hesoB);
    printf("Nhap he so c: ");
    scanf("%f",&hesoC);
    printf("Ta co phuong trinh: %.2fx\u00B2 + %.2fx + %.2f = 0\n",hesoA,hesoB,hesoC);

    if (hesoA==0){
        x = (-hesoB)/hesoC;
        printf("Phuong trinh co 1 nghiem duong x = %.2f\n",x);
    } else {
        double delta = (hesoB*hesoB) - 4*hesoC*hesoA;
        if (delta<0){
            printf("Phuong trinh vo nghiem!");
        } else if (delta==0){
            x = (-hesoB)/2*hesoA;
            printf("Phuong trinh co nghiem kep:\nx = %.2f\n",x);
        } else if (delta>0){
            x1 = (-hesoB + sqrt(delta))/(2*hesoA);
            x2 = (-hesoB - sqrt(delta))/(2*hesoA);
            printf("Phuong trinh co hai nghiem phan biet:\nX\u2081= %.2f\nX\u2082= %.2f\n",x1,x2);
        }
    }
}
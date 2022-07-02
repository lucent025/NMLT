#include <stdio.h>

int main(){
    tamgiac();
    return 0;
}

int tamgiac(){
    int a,b,c;
    printf("Nhap vao canh a: "); scanf("%d",&a);
    printf("Nhap vao canh b: "); scanf("%d",&b);
    printf("Nhap vao canh c: "); scanf("%d",&c);

     if((a<b+c) && (b<a+c) && (c<b+a)) {
        if (a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b){
            printf("\nDay la tam giac vuong!");
        } else if(a==b && b==c){
            printf("\nDay la tam giac deu!");
        } else if (a==b || a==c || b==c){
            printf("\nDay la tam giac can!");
        } else if ((a*a>b*b+c*c) && (b*b>a*a+c*c) && (c*c>b*b+a*a)){
            printf("\nDay la tam giac tu!");
        } else {
            printf("\nDay la tam giac nhon!");
        }
     } else {
            printf("\nBa canh a,b,c khong phai la ba canh cua tam giac!");
     }
}
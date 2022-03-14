/*
  De chay rieng chuong trinh nay thi hay xoa comment 
tai ham int main().

    LUU Y: Chay chuong trinh xong thi sua lai nhu cu de
Lab4_4.c co the chay binh thuong
                    
                    Xin cam on!
*/
#include <stdio.h>
/*
int main(){
    sochinhphuong();
    return 0;
}
*/
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
        printf("%d la so chinh phuong\n",n);
    } else printf("%d khong phai la so chinh phuong\n",n);
}
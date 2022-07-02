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
    songuyento();
    return 0;
}
*/
void songuyento(){
    int value, index = 0;
    
    printf("Nhap vao so n: ");
    scanf("%d",&value);
    for (int i = 2; i < value; i++){
        if (value % i == 0){
            index++;
        }
    }
    if (index == 0){
        printf("%d la so nguyen to!\n", value);
    } else {
        printf("%d khong phai la so nguyen to!\n", value);
    }
}
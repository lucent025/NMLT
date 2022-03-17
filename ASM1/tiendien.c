#include <stdio.h>

void tiendien();

int main(){
    tiendien();
    return 0;
}

void tiendien(){

    int dientieuthu,tien;
    printf("Nhap vao so dien tieu thu: ");
    scanf("%d",&dientieuthu);

    if(dientieuthu>=0 && dientieuthu<=50){
        tien = dientieuthu*1678;
        printf("Tien dien tieu thu: %d VND\n",tien);
    } else if(dientieuthu>=51 && dientieuthu<=100){
        tien = dientieuthu*1734;
        printf("Tien dien tieu thu: %d VND\n",tien);
    } else if(dientieuthu>=101 && dientieuthu<=200){
        tien = dientieuthu*2014;
        printf("Tien dien tieu thu: %d VND\n",tien);
    } else if(dientieuthu>=201 && dientieuthu<=300){
        tien = dientieuthu*2536;
        printf("Tien dien tieu thu: %d VND\n",tien);
    } else if(dientieuthu>=301 && dientieuthu<=400){
        tien = dientieuthu*2834;
        printf("Tien dien tieu thu: %d VND\n",tien);
    } else if(dientieuthu>401){
        tien = dientieuthu*2927;
        printf("Tien dien tieu thu: %d VND\n",tien);
    }
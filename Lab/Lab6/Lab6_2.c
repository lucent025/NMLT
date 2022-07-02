#include <stdio.h>

int main(){
    minmax();
    return 0;
}

void minmax(){
    int sophantu,min,max;
    printf("Nhap vao so phan tu cua mang: ");
    scanf("%d",&sophantu);
    int mang[sophantu];
    for (int i = 0; i < sophantu; i++){
        printf("Nhap vao phan tu thu %d: ",i);
        scanf("%d",&mang[i]);
    }
    min = mang[0];
    max = mang[0];
    for (int index = 1; index < sophantu; index++){
        if (mang[index] > max){
            max = mang[index];
        }
        if (mang[index] < min){
            min = mang[index];
        }
    }
    printf("So lon nhat la: %d\n",max);
    printf("So nho nhat la: %d\n",min);
}
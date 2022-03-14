#include <stdio.h>

/*
int main(){
    hocluc();
    return 0;
}
*/

void hocluc(){

    float diem;
    printf("Nhap vao diem cua sinh vien: ");
    scanf("%f", &diem);

    if (diem>=9){
        printf("Hoc luc xuat sac\n");
    } else if(diem<9 && diem >=8){
        printf("Hoc luc gioi\n");
    } else if(diem<8 && diem>6.5){
        printf("Hoc luc kha\n");
    } else if(diem<6.5 && diem>=5){
        printf("Hoc luc trung binh\n");
    } else if(diem<5 && diem>3.5){
        printf("Hoc luc yeu\n");
    } else if(diem<3.5){
        printf("Hoc luc kem\n");
    }  
}
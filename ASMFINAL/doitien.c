#include <stdio.h>
#include <locale.h>

void doitien();
int trade();

int sotien;
void doitien(){
    printf("Nhap so tien can doi: "); scanf("%d",&sotien);
    trade();
}

int trade(){
    int i = 0;
    int soto[] = {0,0,0,0,0,0,0,0,0};
    int menhgia[] = {500000,200000,100000,50000,20000,10000,5000,2000,1000};
    while(sotien != 0){
        soto[i] = sotien/menhgia[i];
        sotien = sotien%menhgia[i];
        if(sotien < menhgia[i]){
            i++;
        }
    }
    for(int j = 0; j < 9; j++){
        setlocale(LC_NUMERIC, "");
        printf("So to %'d: %d\n",menhgia[j],soto[j]);
    }
}
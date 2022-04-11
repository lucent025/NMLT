#include <stdio.h>
#include <locale.h>

void laisuatvay();
int tinhlai();

int sotien;
void laisuatvay(){
    printf("Nhap vao so tien muon vay: "); scanf("%d",&sotien);
    tinhlai();
}

int tinhlai(){
    int goc,i = 0,lai[] = {0,0,0,0,0,0,0,0,0,0,0,0}
                 ,conlai[] = {0,0,0,0,0,0,0,0,0,0,0,0};
    int phaitra[] = {0,0,0,0,0,0,0,0,0,0,0,0};
    goc = sotien/12;
    
    printf("|   Ky Han   |    Lai Phai Tra    |    Goc Phai Tra    |    So tien Phai Tra    |    So tien Con lai    |\n");
    for(int j = 0; j < 12; j++){
    printf("|     %d               %d                   %d                     %d                       %d           \n",j+1,lai[j],goc,phaitra[j],conlai[j]);
    }
}
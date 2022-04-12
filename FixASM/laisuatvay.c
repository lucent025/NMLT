#include <stdio.h>
#include <locale.h>

void laisuatvay();
int tinhlai();

int sotien;
void laisuatvay(){
    printf("Nhap vao so tien muon vay : "); scanf("%d",&sotien);
    tinhlai();
}

int tinhlai(){
    int i,lai[]     = {0,0,0,0,0,0,0,0,0,0,0,0}
         ,conlai[]  = {0,0,0,0,0,0,0,0,0,0,0,0}
         ,phaitra[] = {0,0,0,0,0,0,0,0,0,0,0,0};
    int goc = sotien/12;
    int temp;
    for(i = 0; i < 12;i++){
        lai[i] = (int)(sotien*0.05);
        sotien = sotien - goc;
        conlai[i] = sotien;
        temp = lai[i]+goc;
        phaitra[i] = temp;
    }
    printf("%d\n",phaitra[i]);
    printf("|   Ky Han   |    Lai Phai Tra    |     Goc Phai Tra     |     So tien Phai Tra     |     So tien Con lai     |\n");
    for(int j = 0; j < 12; j++){
    setlocale(LC_NUMERIC, "");
        printf("     %'d              %'d              %'d               %'d                  %'d           \n",j+1,lai[j],goc,phaitra[j],conlai[j]);
    }
}
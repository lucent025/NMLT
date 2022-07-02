#include <stdio.h>

struct sinhVien;

int dssv();

int main(){
    dssv();
    return 0;
}

struct sinhVien{
    char mssv[50];
    char tensv[50];
    char nganhhoc[50];
    float diemtrungbinh;
} mangSv[50];

int dssv(){
    int i,n,j;
    printf("Nhap vao so luong sinh vien: "); scanf("%d",&n); getchar();

    for (i = 0; i < n; i++){
        printf("====================================================\n");
        printf("Ma so sinh vien vien thu %d: ",i+1); fgets(mangSv[i].mssv, sizeof(mangSv[i].mssv),stdin);
        printf("Ten sinh vien thu %d: ",i+1); fgets(mangSv[i].tensv, sizeof(mangSv[i].tensv),stdin);
        printf("Nganh hoc thu %d: ",i+1); fgets(mangSv[i].nganhhoc, sizeof(mangSv[i].nganhhoc),stdin);
        printf("Diem trung binh thu %d: ",i+1); scanf("%f",&mangSv[i].diemtrungbinh);
        printf("====================================================\n"); getchar();
    }
    for (j = 0; j < n; j++){
        printf("====================================================\n");
        printf("MSSV: %s\n",mangSv[j].mssv);
        printf("Ho va Ten: %s\n",mangSv[j].tensv);
        printf("Nganh Hoc: %s\n",mangSv[j].nganhhoc);
        printf("Diem Trung Binh: %.2f\n",mangSv[j].diemtrungbinh);
        printf("====================================================\n");

    }
}
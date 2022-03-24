#include <stdio.h>
#include <string.h>

struct sinhVien;

int dssv();
void swap();


int main(){
    dssv();
    return 0;
}

typedef struct sinhVien{
    char mssv[50];
    char tensv[50];
    char nganhhoc[50];
    float diemtrungbinh;
} sinhvien;

sinhvien mangSv[50];
int n;
int dssv(){
    int i,j,k,g;
    printf("Nhap vao so luong sinh vien: "); scanf("%d",&n); getchar();

    for (i = 0; i < n; i++){
        printf("====================================================\n");
        printf("Ma so sinh vien vien thu %d: ",i+1); fgets(mangSv[i].mssv, sizeof(mangSv[i].mssv),stdin);
        printf("Ten sinh vien thu %d: ",i+1); fgets(mangSv[i].tensv, sizeof(mangSv[i].tensv),stdin);
        printf("Nganh hoc thu %d: ",i+1); fgets(mangSv[i].nganhhoc, sizeof(mangSv[i].nganhhoc),stdin);
        printf("Diem trung binh thu %d: ",i+1); scanf("%f",&mangSv[i].diemtrungbinh);
        printf("====================================================\n"); getchar();
    }
    for (k = 0; k < n; k++){
        for (g = k + 1; g < n; g++){
            if (mangSv[k].diemtrungbinh > mangSv[g].diemtrungbinh){
                sinhvien temp;
                memcpy(&temp,&mangSv[k],sizeof(sinhvien));
                memcpy(&mangSv[k],&mangSv[g],sizeof(sinhvien));
                memcpy(&mangSv[g],&temp,sizeof(sinhvien));
            }
        }
    }
    char custommssv[50];
    printf("Nhap vao ma so sinh vien: "); scanf("%s",&custommssv); 
    for (j = 0; j < n; j++){
        if (strcmp(custommssv, mangSv[j].mssv) == 0){
            printf("====================================================\n");
            printf("MSSV: %s\n",mangSv[j].mssv);
            printf("Ho va Ten: %s\n",mangSv[j].tensv);
            printf("Nganh Hoc: %s\n",mangSv[j].nganhhoc);
            printf("Diem Trung Binh: %.2f\n",mangSv[j].diemtrungbinh);
            printf("====================================================\n");
        }
    }
}
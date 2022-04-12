#include <stdio.h>
#include <locale.h>

void karaoke();
int tinhtien();

int batdau, ketthuc;
void karaoke() {
    printf("Nhap vao gio dau: "); scanf("%d",&batdau); 
    printf("Nhap vao gio ket thuc: "); scanf("%d",&ketthuc);
    while (batdau < 11 || ketthuc > 23) {
        printf("Nhap sai xin hay nhap lai\nQuan chi hoat dong trong khung gio tu 12h-23h\n");
        printf("Nhap vao gio dau: "); scanf("%d",&batdau); 
        printf("Nhap vao gio ket thuc: "); scanf("%d",&ketthuc);
    }
    int thanhtien = tinhtien();
    setlocale(LC_NUMERIC, "");
    printf("So tien khach phai tra la: %'d vnd",thanhtien);
}

int tinhtien() {
    int thanhtien, tienmoigio = 50000;
    if(ketthuc - batdau == 3) {
        thanhtien = 150000;
    } else if(ketthuc - batdau < 3){
        thanhtien = (ketthuc - batdau)*50000;
    } else if(ketthuc - batdau > 3) {
        thanhtien = 150000 + ((tienmoigio - tienmoigio*0.3)*((ketthuc - batdau)-3));
    }
    if(batdau >= 14 && batdau <= 17){
        thanhtien = thanhtien - thanhtien*0.1;
    }
    return thanhtien;
}
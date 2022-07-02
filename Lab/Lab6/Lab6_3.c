#include <stdio.h>

int main(){
    sapxep();
    return 0;
}

void sapxep(){
    int sophantu;
    printf("Nhap vao so phan tu cua mang: ");
    scanf("%d",&sophantu);
    int mang[sophantu];
    for (int i = 0; i < sophantu; i++){
        printf("Nhap vao phan tu thu %d: ",i);
        scanf("%d",&mang[i]);
    }
    
    for (int a = 0; a < sophantu; a++){
        for (int n = 0; n < sophantu-1; n++){
            if (mang[a] > mang[n]){
                swap(&mang[a],&mang[n]);
            }
        }
    }
    for (int o = 0; o < sophantu; o++){
        printf(" %d ",mang[o]);
    }
}
int swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    return a,b;
}
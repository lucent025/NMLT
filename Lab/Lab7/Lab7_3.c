#include <stdio.h>
#include <string.h>

void sortstring();


int main(){
    sortstring();
    return 0;
}

void sortstring(){
    char string[5][20],substring[20];
    int i,j;
    printf("\nNhap 5 chuoi bat ky: \n");
    for (i = 0; i < 5; i++){
      scanf("%s", string[i]);
    }
    for (i = 1; i < 5; i++) {
      for (j = 1; j < 5; j++) {
         if (strcmp(string[j - 1], string[j]) > 0) {
            strcpy(substring, string[j - 1]);
            strcpy(string[j - 1], string[j]);
            strcpy(string[j], substring);
         }
      }
   }
   printf("\nSap xep thu tu cua cac chuoi:");
   for (i = 0; i < 5; i++){
      printf("\n%s", string[i]);
   }
}

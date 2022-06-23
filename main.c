#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char isim[20];
    char terskelime[20];
    int ret;
    int terskelimeindex;
    int sayac = 0;
            printf("isminizi giriniz:");
            scanf("%s",&isim);
            ret = strlen(isim);
            terskelimeindex = ret -1;
    for(int x= 0 ;x<ret;x++){
            terskelime[x]= isim[terskelimeindex];
            terskelimeindex--;
}

    for(int y = 0; y <ret; y++){
        if(isim[y]==terskelime[y]){
            sayac++;
        }
    }
        if(sayac==ret){
            printf("Bu bir palindrom");
        }
        else
        {
            printf("Bu bir palindrom degil");
        }


    return 0;
}

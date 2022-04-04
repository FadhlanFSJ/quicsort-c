#include<stdio.h>

int quicksort(int x,int y,int z[]){

    int start,finish,pivot,temp,cek;
    start   = x;
    finish  = y;
    pivot   = x;

    if(start <= finish){
    while(start < finish){
        while(z[start] <= z[pivot]){
            start++;
        }
        while(z[finish] > z[pivot]){
            finish--;
        }
        if(start < finish){
            temp = z[finish];
            z[finish] = z[start];
            z[start] = temp;
        }
    }
    temp = z[pivot];
    z[pivot] = z[finish];
    z[finish] = temp;


    quicksort(x,finish-1,z);
    quicksort(finish+1,y,z);

    }else {
    return;
    }
}

void tampil(int x[],int y){
    for(int a = 0; a < y; a++){
        printf("%d ",x[a]);
    }
    puts(" ");
}

int main(){

    int angka[] = {3,5,1,4,2,6,10,7,9,8};
    int jumlah = sizeof(angka) / sizeof(angka[0]);

    printf("ARRAY SEBELUM SORTING : ");
    tampil(angka,jumlah);

    quicksort(0,jumlah-1,&angka);

    printf("ARRAY SESUDAH SORTING : ");
    tampil(angka,jumlah);
}

#include<stdio.h>

int main(){
    //rows
    int rows = 10;
    for(int i=0;i<rows;i++){
        //print spaces
        for(int j=0;j<rows-i;j++){
            printf(" ");
        }
        //print stars
        for(int j = 0 ; j < 2 * i + 1 ; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

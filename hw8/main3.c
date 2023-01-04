#include <stdio.h>

void get_binary(int i){
    int bin[32];
    int index=0;
    while(i != 0){
        bin[index] = i % 2;
        i /= 2;
        index++;
    }
    while(index--){
        if(index%4==3){
            printf(" ");
        }
        printf("%d", bin[index]);
    }
}

int main(){
    int i=45648;
    get_binary(i);
    return 0;
}

#include <stdio.h>

int main(){
    int i=15;
    int ans;
    //0000 1111
    int bin[32];
    int index=0;
    while(i != 0){
        bin[index] = i % 2;
        i /= 2;
        index++;
    }
    while(index--){
        ans+=bin[index];
    }
    printf("%d \n",ans);
    return 0;
}

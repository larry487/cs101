#include <stdio.h>

int round_func(float f){
    int digit = ( (int)( f * 10 ) ) % 10;
    int ans = ( ( f * 10 ) - digit ) / 10;
    if(digit>=5){
        printf("%d \n", ans + 1);
    }else{
        printf("%d \n", (int)f);
    }
}

int main(){
    float i= 420.69;
    round_func(i);
    return 0;
}

#include <stdio.h>

int main()
{
    int i = 10;
    
    if ((i&i-1)==0){
        printf("%d is True",i);
    }else {
        printf("%d is False",i);
    }

    return 0;
}

#include <stdio.h>
 
int main()
{
    int year=2022;
 
 
 
    if(year%4 == 0)
    {
        if( year%100 == 0)
        {
            // 這裡如果被 400 整数是閏年
            if ( year%400 == 0)
                printf("%d 是閏年", year);
            else
                printf("%d 不是閏年", year);
        }
        else
            printf("%d 是閏年", year );
    }
    else
        printf("%d 不是閏年", year);
    
    return 0;
}

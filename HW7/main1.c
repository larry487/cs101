#include <stdio.h>

int main()
{
   int n =7;
   
   for (int i=1;i<=n;i++){
           printf("%*c",n-i+1,' ');
       for(int j=1;j<=i;j++){
           printf(" ");
           printf("%d",i);
       }
       printf("\n");
   }
}

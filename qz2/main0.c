#include <stdio.h>
int main(){
  for(int m=0;m<=4;m++){
		  for(int n=0;n<=m;n++){
			  printf(" ");
		}
		  for(int a=0;a<9-m*2;a++){
		    printf("*");
		}
		  printf("\n");
}


	return 0;
}

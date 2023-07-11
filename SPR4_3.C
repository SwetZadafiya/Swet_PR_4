/*          5
	  4 5
	3 4 5
      2 3 4 5
    1 2 3 4 5  */


#include<stdio.h>
#include<conio.h>

void main(){

int a,b,c;

clrscr();

printf("-=-=-=--=-=-=-=-=-=-=-=-=\n\n");

for(a=5;a>=1;a--){
   for(b=a;b>=1;b--){
      printf(" ");
   }
   for(c=a;c<=5;c++){
      printf("%d",c);
   }
printf("\n");
}

printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=");

getch();
}
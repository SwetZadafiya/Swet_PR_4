/*  1 0 1 0 1
      1 0 1 0
	1 0 1
	  1 0
	    1  */


#include<stdio.h>
#include<conio.h>

void main(){

int a,b,c;

clrscr();

printf("-=-=-=--=-=-=-=-=-=-=-=-=\n\n");

for(a=1;a<=5;a++){
   for(b=1;b<=a;b++){
      printf(" ");
   }
   for(c=5;c>=a;c--){
      printf("%d",c%2);
   }
printf("\n");
}

printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=");

getch();
}
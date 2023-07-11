/* 11
   12 13
   14 15 16
   17 18 19 20
   21 22 23 24 25 */

#include<stdio.h>
#include<conio.h>

void main(){

int a,b,c=10;

clrscr();

printf("-=-=-=--=-=-=-=-=-=-=-=-=\n\n");

for(a=1;a<=5;a++){
   for(b=1;b<=a;b++){
      c++;
      printf("%d ",c);
   }
printf("\n");
}

printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=");

getch();
}
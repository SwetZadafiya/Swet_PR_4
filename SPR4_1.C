/* 41
   41 42
   41 42 43
   41 42 43 44
   41 42 43 44 45 */


#include<stdio.h>
#include<conio.h>

void main(){

int a,b;

clrscr();

printf("-=-=-=--=-=-=-=-=-=-=-=-=\n\n");

for(a=41;a<=45;a++){
   for(b=41;b<=a;b++){
      printf("%d ",b);
   }
printf("\n");
}

printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=");

getch();
}
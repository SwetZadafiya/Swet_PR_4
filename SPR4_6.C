/*       5
	454
       34543
      2345432
     123454321  */

#include<stdio.h>
#include<conio.h>

void main(){

int a,b,c,d;

clrscr();

for(a=5;a>=1;a--){
   for(b=a;b>=1;b--){
      printf(" ");
   }
   for(c=a;c<=5;c++){
      printf("%d",c);
   }
   for(d=4;d>=a;d--){
      printf("%d",d);
   }
printf("\n");
}

getch();
}
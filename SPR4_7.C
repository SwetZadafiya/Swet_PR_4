/*   * * * * *
     *       *
     * * * * *
     *       *
     *       *    */

#include<stdio.h>
#include<conio.h>

void main(){

int a;

clrscr();

for(a=1;a<=5;a++){

   if(a==1 || a==3){
      printf("* * * * *\n");
   }else{
      printf("*       *\n");
   }
}

getch();
}
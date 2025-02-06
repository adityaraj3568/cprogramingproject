#include"stdio.h"
#include"conio.h"
void main()
{
 clrscr();
 int i,j,num;
 printf("enter a number :");
 scanf("%d",&num);
 for(i=1;i<=num;i++)
 {
 for(j=1;j<=i;j++)
 {
 printf("* ");
 }
 printf("\n");
 }
 getch();
}
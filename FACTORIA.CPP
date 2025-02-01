// write a program to input a number and print factorial of the number using loop
#include"stdio.h"
#include"conio.h"
void main()
{
clrscr();
int num,i,facto=1;
printf("enter a number :");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
facto=facto*i;
}
printf("factorial of the number is : %d",facto);
getch();


}
#include"stdio.h"
#include"conio.h"
void main()
{
clrscr();
char pn[20];
int pq,pr,gst,amount,total;
printf("Enter a product name :");
scanf("%s",&pn);
printf("Enter product rate : ");
scanf("%d",&pr);
printf("Enter product quantity :");
scanf("%d",&pq);
amount=pq*pr;
gst=amount*0.18;
printf("gst is  %d",gst);
total=gst*amount;
printf("\n\ttotal is %d",amount);
getch();
}
#include<stdio.h>
main()
{
int a,b;
int ch;
printf(" 1 for addition\n 2 for subraction\n 3 for multiplication\n 4 for division\n 5 for remainder");
printf("\nenter your choice=");
scanf("%d",&ch);
printf("enter  two numbers=");
scanf("%d %d",&a,&b);
switch(ch)
{
case 1:
printf("addition=%d",a+b);
break;
case 2:
printf("subraction=%d",a-b);
break;
case 3:
printf("multiplication=%d",a*b);
break;
case 4:
printf("quotient=%d",a/b);
break;
case 5:
printf("remainder=%d",a%b);
break;
default:
printf("\ninvalid choice");
}}

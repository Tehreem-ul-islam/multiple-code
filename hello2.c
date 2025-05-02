#include <stdio.h>
int main()
{
char op ,ch;
int x,y;
printf("select operator + - *  ");
scanf("%c",&op);
printf("enter number :");
scanf("%d %d",&x,&y);
switch (op)
{
case  '+':
  printf("%d",x+y);
  break;
case '-':
printf("%d",x-y);
break;
case '&':
printf("%d",x%y);
break;
default :
printf("hello");
break;
}
}
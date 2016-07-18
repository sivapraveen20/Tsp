
#include<stdio.h>
int main()
{
int i,b=0,r,t,t1,sum=0;
clrscr();
printf("Enter the number");
scanf("%d",&i);
t=i;
while(t!=0)
{
r=t%10;
b=b+r;
t=t/10;
}
printf("%d\n",b);
t1=b;
while(b)
{
r=b%10;
b=b/10;
sum=sum*10+r;
}
if(t1==sum)
{
printf("palindrome");
}
else
printf("Not a palindrome");
return 0;
}

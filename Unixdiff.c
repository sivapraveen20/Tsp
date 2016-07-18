#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char s1[50],s2[50],n,cost=0,cost1=0,l1,l2,count=0,min;
int h1[26]={0};
int h2[26]={0};
scanf("%s",s1);
scanf("%s",s2);
l1=strlen(s1);
l2=strlen(s2);
for(n=0;s1[i];++n)
{
h1[s1[n]-97]++;
}
for(n=0;s2[n];++n)
{
h2[s2[n]-97]++;
}
for(n=0;n<26;n++)
{
count=count+abs(h1[n]-h2[n]);
}
if(l1!=l2)
{
if(count==abs(l1-l2))
{
cost=+count*3;
}
}
else
{
cost=((count/2)*3)+((count/2)*4);
cost1+=(count/2*5);
}
min=(cost<cost1)?cost:cost1;
printf("%d",min);
getch();
}


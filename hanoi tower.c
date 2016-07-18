
#include <stdio.h>
#include <conio.h>
void hanoi1(char,char,char,int);
void main()
{
int i;
clrscr();
printf(" Enter the num of disk: ");
scanf("%d",&i);
printf("\n tower of honai %d number of disk : ", i);
hanoi1('A','B','C', i);
getch();
}
void hanoi1(char from,char to,char other,int b)
{
if(b<=0)
printf("\n Enter a valid disk");
if(b==1)
printf("\n Move disk from %c to %c",from,other);
if(b>1)
{
hanoi1(from,other,to,b-1);
hanoi1(from,to,other,1);
hanoi1(to,from,other,b-1);
}
  }

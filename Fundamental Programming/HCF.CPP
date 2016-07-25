
#include<stdio.h>
#include<conio.h>
#include<iostream.h>

void main()
{
clrscr();
int x,y;
cout<<"Enter two numbers ";
cin>>x>>y;
int l=(x<y)?x:y;

for(int i=l;i>=1;i--)
{
     if(x%i==0&&y%i==0)
	{
	  cout<<"HCF is "<<i;
	  break;
       }

}
getch();

}
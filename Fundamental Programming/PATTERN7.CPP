#include<iostream.h>
#include<conio.h>
#include<stdio.h>

void main()
{
clrscr();
int n;
cout<<"Enter Number of Rows ";
cin>>n;
int x=10,y=5;
for(int i=1;i<=n;i++)
{
	gotoxy(x,y);

     for(int k=1;k<=i;k++)
		{
		cout<<k;
		}
     x=x-1;
     y=y+1;
}


getch();
}
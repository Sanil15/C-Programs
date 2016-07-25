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

     y=y+1;
}
x=x+n-1;
y=y-1;

for(i=n;i>=1;i--)
{
      gotoxy(x,y);

	  for(int j=i;j>=1;j--)
	  {
	  cout<<j;
	  }
	  y=y-1;
	  x=x+1;
}

getch();
}
#include<iostream.h>
#include<conio.h>
#include<stdio.h>

void main()
{
clrscr();
int n;
cout<<"Enter Number of Rows ";
cin>>n;
char ch=65;
for(int i=1;i<=n;i++)
{
	for(int j=1;j<=i;j++)
		{
		cout<<ch;
		ch=ch+1;
		}
		ch=65;
		cout<<endl;
}


getch();
}
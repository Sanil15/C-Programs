#include<stdio.h>
#include<conio.h>
#include<iostream.h>

void main()
{
clrscr();
int x,y;
cout<<"Enter two numbers ";
cin>>x>>y;
int l=(x>y)?x:y;
for(int i=l;i<=x*y;i=i+l)
{
       if(i%x==0&&i%y==0)
		{
		cout<<"LCM is "<<i;
		break;
		}
}
getch();

}
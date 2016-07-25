#include<stdio.h>
#include<conio.h>
#include<iostream.h>

int LCM(int a,int b,int c)
{
int m;
m=(a>b&&a>c)?a:(b>c&&b>a)?b:c;

for(int i=2;;i++)
{
	if(m%a==0&&m%b==0&&m%c==0)
	{
	return m;
	}
	m=m*i;
}

}
void main()
{
clrscr();
int a,b,c;
cout<<"Enter Three Numbers For L.C.M calculation ";
cin>>a>>b>>c;
cout<<"LCM is "<<LCM(a,b,c);


getch();
}
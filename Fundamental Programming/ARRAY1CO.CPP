#include<iostream.h>
#include<conio.h>
#include<stdio.h>

void main()
{
clrscr();
int a[50],b[50],c[50];
int as,bs,cs;
cout<<"Enter the size of array A ";
cin>>as;
for(int i=0;i<as;i++)
{
cin>>a[i];
}

cout<<"Enter the size of array B ";
cin>>bs;
for(i=0;i<bs;i++)
{
cin>>b[i];
}
int j;
for(i=0,j=bs-1;i<5,j>=bs-5;i++,j--)
{
	c[i]=a[i];
	c[9-i]=b[j];

}
cout<<endl;
for(int k=0;k<10;k++)
cout<<c[k]<<" ";

getch();
}
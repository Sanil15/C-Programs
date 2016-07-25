#include<iostream.h>
#include<conio.h>
#include<stdio.h>

void main()
{
clrscr();
int a[50];
int n;
cout<<"Enter the size of array A ";
cin>>n;
cout<<"Enter Elements in sorted order";
for(int i=0;i<n;i++)
{
cin>>a[i];
}

cout<<endl;
cout<<"Orignal Array : ";
for(int k=0;k<n;k++)
{
cout<<a[k]<<" ";
}
cout<<endl;

int p=0,v;
cout<<"Enter Value ";
cin>>v;

for(i=0;i<n;i++)
{
	if(v>a[i])
	p=i;

}
cout<<endl;

for(i=n;i>p;i--)
a[i]=a[i-1];


a[p+1]=v;
cout<<"New  Array : ";
for(k=0;k<=n;k++)
cout<<a[k]<<" ";

getch();
}
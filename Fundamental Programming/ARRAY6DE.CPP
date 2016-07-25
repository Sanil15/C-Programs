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
cout<<"Enter Elements in Array";
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

int p,v;
cout<<"Enter Position to delete ";
cin>>p;
v=a[p];
for(i=p;i<n;i++)
{
	a[i]=a[i+1];
}
cout<<endl;

cout<<"Deleted Element "<<v<<endl;
cout<<"New  Array : ";
for(k=0;k<n-1;k++)
cout<<a[k]<<" ";


getch();
}
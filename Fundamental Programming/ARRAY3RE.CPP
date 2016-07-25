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


for(i=0;i<=n/2;i++)
{
	int temp=a[i];
	a[i]=a[n-i-1];
	a[n-i-1]=temp;

}
cout<<"Reversed Array : ";
for(k=0;k<n;k++)
cout<<a[k]<<" ";

getch();
}
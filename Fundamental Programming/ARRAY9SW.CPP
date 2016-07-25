#include<iostream.h>
#include<conio.h>
#include<stdio.h>

void main()
{
clrscr();
int a[50];
int n,i;
cout<<" Enter the size of array A ";
cin>>n;
for(i=0;i<n;i++)
{
cin>>a[i];
}
int temp;
int c=0;
if(n%2!=0)
c=1;
for(i=0;i<n/2;i++)
{
temp=a[i];
a[i]=a[(n/2)+i+c];
a[(n/2)+i+c]=temp;
}


cout<<endl;
for(int k=0;k<n;k++)
cout<<a[k]<<" ";
getch();
}
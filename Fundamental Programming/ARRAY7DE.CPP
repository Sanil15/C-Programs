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

for(i=0;i<n;i++)
{
	for(int j=i+1;j<n;j++)
	    {
	    if(a[i]==a[j])
		{
			for(int l=j;l<n-1;l++)
			a[l]=a[l+1];
		 n--;

		}
	    }

}
cout<<endl;


cout<<"New  Array : ";
for(k=0;k<n;k++)
cout<<a[k]<<" ";


getch();
}
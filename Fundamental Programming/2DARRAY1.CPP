#include<stdio.h>
#include<conio.h>
#include<iostream.h>

void main()
{
clrscr();
int a[50],n,b[50][50];
cout<<"Enter Size Of Id Array ";
cin>>n;
cout<<"Enter Array Elements ";
for(int i=0;i<n;i++)
{
cin>>a[i];
}

for(i=0;i<n;i++)
{
	for(int j=0;j<n;j++)
	       {

	       if(i>=j)
	       {
	       b[i][j]=a[j];
	       }

	       else
	       b[i][j]=0;
	       }
}


for(i=0;i<n;i++)
	{
	for(int j=0;j<n;j++)
	 {
		cout<<b[i][j]<<" ";
	 }
	cout<<endl;
	}
getch();
}
#include<stdio.h>
#include<conio.h>
#include<iostream.h>

void main()
{
clrscr();
int x,y,a[50][50];
cout<<"\n Enter No of Rows ";
cin>>x;
cout<<"\n Enter Number Of Columns ";
cin>>y;
cout<<"\n Enter Array Elements ";
for(int i=0;i<x;i++)
{
	for(int j=0;j<y;j++)
	       {
		cin>>a[i][j];
	       }
}

int sum=0;
for(i=0;i<x;i++)
{
	for(int j=0;j<y;j++)
	       {
		if(i==j||i+j==x-1)
		sum=sum+a[i][j];
		}


}
cout<<"Array is ";
for(i=0;i<x;i++)
	{
	for(int j=0;j<y;j++)
	 {
		cout<<a[i][j]<<" ";
	 }
	cout<<endl;
	}
cout<<"SUM IS "<<sum;
getch();
}
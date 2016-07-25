#include<stdio.h>
#include<conio.h>
#include<iostream.h>

void main()
{
clrscr();
int a[50],n,b[50][50]={0};
cout<<"Enter Size Of Id Array ";
cin>>n;
cout<<"Enter Array Elements ";
for(int i=0;i<n;i++)
{
cin>>a[i];
}

for(i=0;i<n;i++)
{
  if(i==0||i==n-1)
	{
	b[0][i]=a[0];
	b[n-1][i]=a[n-1];
	}
  if(i!=0&&i!=n-1)
	{
	for(int j=1;j<=n-2;j++)
	b[i][j]=a[i];
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
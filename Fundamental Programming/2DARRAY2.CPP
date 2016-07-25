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
 b[0][i]=a[i];
 b[n-1][i]=a[n-i-1];
 b[i][0]=a[i];
 b[i][n-1]=a[n-i-1];

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
#include<iostream.h>
#include<conio.h>
#include<stdio.h>

void main()
{
clrscr();
int a[50],b[50],c[50];
int as,bs,i,j,k;
cout<<"Enter the size of array A ";
cin>>as;
for(i=0;i<as;i++)
{
cin>>a[i];
}

cout<<"Enter the size of array B ";
cin>>bs;
for(i=0;i<bs;i++)
{
cin>>b[i];
}
i=0;j=0,k=0;

while(i<as&&j<bs)
{
	if(a[i]>b[j])
	{
	c[k]=b[j];
	j++;
	k++;
	}

	else
	{
	c[k]=a[i];
	i++;
	k++;
	}

}
cout<<"out";

while(i<as)
{
c[k]=a[i];
i++;
k++;
}
cout<<"out";


while(j<bs)
{
c[k]=b[j];
k++;
j++;
}
cout<<"out";

cout<<endl;
for(k=0;k<as+bs;k++)
cout<<c[k]<<" ";
getch();
}
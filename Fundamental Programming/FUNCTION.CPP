#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<math.h>
int inter(int n)
{

int b=n,c,i=0,k=0;
int a=0,temp;

	while(b>0)
	{
	c=b%10;
	b=b/10;
	i++;
	}

	k=i;
	i=0;

	while(n>0)
	{
	c=n%10;

	if(i==0||i==k-1){
	temp=c*pow(10,k-i-1);

	}

	else{
	temp=c*pow(10,i);
	}
	i++;
	n=n/10;
	a=a+temp;

	}

       return a;
}

void main()
{
clrscr();
int n;
cout<<"Enter Numbers For Inter Change ";
cin>>n;
cout<<"New Number is "<<inter(n);
getch();
}
\#include<iostream.h>
#include<conio.h>
#include<stdio.h>

void main()
{
clrscr();

int *p,n;
cout<<"Enter The Number of Elements in Array\n";
cin>>n;
p=new int[n];
int temp,chk=0;
cout<<"Enter the Elements ";
for(int i=0;i<n;i++)
{
cin>>*(p+i);
}
if(n%2!=0)
chk=1;
for(i=0;i<n/2;i++)
{
temp=*(p+i);
*(p+i)=*(p+n/2+i+chk);
*(p+n/2+i+chk)=temp;
}
cout<<"Array Shifted with Shifted 1st and 2nd Half is  \n";
for(i=0;i<n;i++)
{
cout<<" "<<*(p+i)<<" ";
}

getch();
}
#include<iostream.h>
#include<conio.h>
#include<stdio.h>

void main()
{
clrscr();

int *p,n;
cout<<"Enter The Number of Elements in Array\n";
cin>>n;
p=new int[n];
int temp,c=0;
cout<<"Enter the Elements ";
for(int i=0;i<n;i++)
{
cin>>*(p+i);
}

for(i=0;i<n;i++)
{
  if(*(p+i)<0)
  {

    for(int l=i;l<n;l++)
    {
     *(p+l)=*(p+l+1);
    }
  delete [n-c]p;
  c++;
  n--;
  }
}

cout<<"Array Shifted with Negative Elements DELETED \n";
for(i=0;i<n;i++)
{
cout<<" "<<*(p+i)<<" ";
}

getch();
}
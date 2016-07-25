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
int c=0,temp;
cout<<"Enter the Elements ";
for(int i=0;i<n;i++)
{
cin>>*(p+i);
}

for(i=0;i<n;i++)
{
  if(*(p+i)<0)
  {
    temp=*(p+i);
    for(int l=i;l>c;l--)
    {
     *(p+l)=*(p+l-1);
    }
  *(p+c)=temp;
  c++;
  }

}
cout<<"Array Shifted with Negative Elements at Left \n";
for(i=0;i<n;i++)
{
cout<<" "<<*(p+i)<<" ";
}

getch();
}
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void func(char [],int);
void main()
{
clrscr();

char *p;
int n;
cout<<"Enter The String Length of String ";
cin>>n;
p=new char[n];

cout<<"Enter the String ";
gets(p);

func(p,n);

cout<<"\n NEW STRING IS \n";
puts(p);

getch();
}

void func(char p[],int n)
{
for(int i=0;i<n;i++)
{
   if(i==0||p[i]==' ')
   {
   if(i==0)
	{
	if(p[i]>=97&&p[i]<=122)
	p[i]=p[i]-32;
	}
   else
       {
       i++;
       if(p[i]>=97&&p[i]<=122)
	p[i]=p[i]-32;
       }

   }

   else
   {
   if(p[i]>=65&&p[i]<=90)
	p[i]=p[i]+32;

   }
}

}
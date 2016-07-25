#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
void main()
{
clrscr();
char s[100];
cout<<"Enter the String ";
gets(s);
int l=strlen(s);
int c=0,j=0,i=0,chk=0,m=1;
char temp;
while(i<l)
{


	for(j=i;j<i+chk/2;j++)
	{
	 temp=s[j];
	 s[j]=s[j+chk-m];
	 s[chk+j-m]=temp;
	 m++;
	}
	c++;
	i=c;
	chk=0;

}
cout<<"New Formed String is : ";
puts(s);

getch();
}
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
int temp;
for(int i=0;i<l;i++)
{
	temp=(int)s[i];

	if(temp>=65&&temp<=90)
	{
	temp=temp+32;
	s[i]=(char)temp;
	}


	else if(temp>=97&&temp<=122)
	{
	temp=temp-32;
	s[i]=(char)temp;
	}
}

cout<<"Converted String : ";
puts(s);
getch();
}

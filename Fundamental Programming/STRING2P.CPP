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
int c=0;
for(int i=0;i<l/2;i++)
{
	if(s[i]==s[l-i-1])
	c++;
	else
	{
	cout<<"Not a Palindrome ";
	break;
	}
}
if(c==l/2)
cout<<"Given String is a Palindrome ";

getch();
}
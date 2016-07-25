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
cout<<l<<endl;

char temp;
for(int i=0;i<l/2;i++)
{
temp=s[i];
s[i]=s[l-i-1];
s[l-i-1]=temp;
}
cout<<"Reversed String : ";
puts(s);
getch();
}
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
int t;
for(int i=0;i<l;i++)
{
	t=(int)s[i];
	if(i==0)
	{
		if(t>=97&&t<=122)
		s[i]=s[i]-32;
	}

	else if(s[i]==' ')
	{
		i++;
		t=(int)s[i];
		if(t>=97&&t<=122)
		s[i]=s[i]-32;
	}

	else if(t>=65&&t<=90)
		s[i]=s[i]+32;

}
cout<<"New Formed String is : ";
puts(s);

getch();
}
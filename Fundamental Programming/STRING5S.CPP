#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
void main()
{
clrscr();
char s[100];
char a[100];
cout<<"Enter the String\n ";
gets(s);
int ls=strlen(s);
cout<<"Enter the Sub String\n ";
gets(a);
int la=strlen(a);
int j=0,chk=0;
int l;
for(int i=0;i<ls;i++)
{
   if(a[0]==s[i])
	{
	  l=i;
	  while(j<la)
	  {
	    if(a[j]==s[l])
	    chk++;

	    j++;
	    l++;
		  }

	}
     if(chk==la)
     {
     cout<<"YO SUBSUTRING!!!!!!!";
     break;
     }
  j=0;
  chk=0;

}
if(chk==0)
cout<<"F OFF!!! NOT A SUB STRING ";

getch();
}
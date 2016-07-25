#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
struct person
{
char name[50];

struct add
{
	int no;
	char street[50];
	char city[50];
}o,r;

};

void main()
{
clrscr();
person s[100];
int n;
cout<<"Enter Number of Persons \n";
cin>>n;
for(int i=0;i<n;i++)
{
cout<<"Enter the Name of Person \n";
gets(s[i].name);
cout<<"Enter Office Address!!!!!!!\n";
cout<<"Enter the Office Number\n ";
cin>>s[i].o.no;
cout<<"Enter the Office Street \n";
gets(s[i].o.street);
cout<<"Enter the Office City \n";
gets(s[i].o.city);
cout<<"Enter Residential Address!!!!!!!\n";
cout<<"Enter the Residence Number\n ";
cin>>s[i].r.no;
cout<<"Enter the Residence Street \n";
gets(s[i].r.street);
cout<<"Enter the Residence City \n";
gets(s[i].r.city);
}
cout<<"Person with Same Residential and Office address";
cout<<endl;

for(i=0;i<n;i++)
{
	if( (s[i].o.no==s[i].r.no) && (strcmpi(s[i].o.street,s[i].r.street)==0)
	&& (strcmpi(s[i].o.city,s[i].r.city)==0) )
	  {
	  cout<<"Yes";
      cout<<puts(s[i].name);
      }
   }


getch();
}

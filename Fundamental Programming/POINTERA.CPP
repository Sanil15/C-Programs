#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void func(char [],int);
void main()
{
clrscr();
int x[3][5]={{18,20,13,24,25},{7,8,6,19,10},{19,22,30,21,5}};
int *n=&x[0][0];

cout<<"1. (*(n+3)+1)=\t"<<(*(n+3)+1)<<endl;

cout<<"2. *(n+2)=\t"<<*(n+2)<<endl;
cout<<"----------"<<endl;
cout<<"*x+2=\t"<<*x+2<<endl;
cout<<"*x+0=\t"<<*x+0<<endl;
cout<<"*x=\t"<<*x<<endl;
cout<<"3. *(*x+2)+5=\t"<<*(*x+2)+5<<endl;
cout<<"----------"<<endl;
cout<<"*n=\t"<<*n<<endl;
cout<<"*n+0=\t"<<*n+0<<endl;
cout<<"4.++*n=\t"<<++*n<<endl;
cout<<"----------"<<endl;
cout<<"*(x)+2=\t"<<*(x)+2<<endl;
cout<<"5. *(*(x)+2)=\t"<<*(*(x)+2)<<endl;
cout<<"----------"<<endl;
cout<<"*(x+2)=\t"<<*(x+2)<<endl;
cout<<"*(x+2)+1=\t"<<*(x+2)+1<<endl;
cout<<"*x+3=\t"<<*x+3<<endl;
getch();
}

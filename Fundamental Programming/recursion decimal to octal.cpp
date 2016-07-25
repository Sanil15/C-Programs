using namespace std;
#include<iostream>
int conv(int);
int main()
{
int d,a,m;
cout<<"Enter the value of decimal";
cin>>a;
m=conv(a);
cout<<"eqvivalent octal "<<m;
cin>>d;
return 0;
}
int conv(int a)
{
int m=1,i;
if((a%8)>0)
{
m=((a%8)*pow(10,++i))+conv(a/8);
}
return m;    
}

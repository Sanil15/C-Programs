using namespace std;
#include<iostream>
int HCF(int,int);
int main()
{
int a,l,b,d;
cout<<"Enter the number";
cin>>a>>b;
l=HCF(a,b);
cout<<"HCF"<<l;
cin>>d;    
return 0;
}
int HCF(int a,int b)
{
int m,n,l,x;
m=(a>b)?a:b; 
n=(a<b)?a:b;       
while(x<=n&&x>0)
{
l=m%n;
x=HCF(l,n);
return x;         
}

}

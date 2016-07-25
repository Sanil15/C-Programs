using namespace std;
#include<iostream>
int main()
{
int d,a[50],temp,n,c=1;
cout<<"enter size of array"<<endl;
cin>>n;
cout<<"enter array"<<endl;
for(int i=0;i<n;i++)
{
cin>>a[i];        
}
if(n%2==0)
{
for(int i=0;i<n/2;i++)
{
temp=a[i];
a[i]=a[(n/2)+i];
a[(n/2)+i]=temp;
}
}
else
{
for(int i=0;i<n/2;i++)
{
temp=a[i];
a[i]=a[(n/2)+c];
a[(n/2)+c]=temp;
c++;
}    
}                  
cout<<"\nSwapped array is";
for(int i=0;i<n;i++)
{
cout<<a[i]<<endl;        
}                  

cout<<"enter element to exit"<<endl;
cin>>d;



return 0;
}

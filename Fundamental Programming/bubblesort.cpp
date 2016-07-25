using namespace std;
#include<iostream>
int main()
{
int d,a[50],temp,n;
cout<<"enter size of array"<<endl;
cin>>n;
cout<<"enter array"<<endl;
for(int i=0;i<n;i++)
{
cin>>a[i];        
}
for(int i=0;i<n-1;i++)
                  {
                            if(a[i]>a[i+1])
                                           {
                                           temp=a[i+1];
                                           a[i+1]=a[i];
                                           a[i]=temp;                           
                                           }
                  }
cout<<"\nsorted array is";
for(int i=0;i<n;i++)
{
cout<<a[i]<<endl;        
}                  

cout<<"enter element to exit";
cin>>d;



return 0;
}

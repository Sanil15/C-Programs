using namespace std;
#include<iostream>
int main()
{                  

int b[50],n,d,a;
cout<<"Enter the size of an array ";
cin>>n;
cout<<"Enter array in an sorted order";

for(int i=0;i<n;i++)
        {
        cin>>a[i];            
        }
int k=1;
int m=a[0];
for(int j=m;j>=1;j--)
    {
     for(int k=1;k<n;k++)
     {
      a[k]%j==0;
      cout<<"Hcf of elements"<<j;
     }
}
cin>>d;
return 0;
}






















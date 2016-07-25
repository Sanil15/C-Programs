using namespace std;
#include<iostream>
int main()
{
int a[50][50],d,sum=0,n;
cout<<"enter size of a sqaure array"<<endl;
cin>>n;
cout<<"enter array elements"<<endl;

for(int i=0;i<n;i++)
        {
        for(int j=0;j<n;j++)
        {
        cin>>a[i][j];
        }
        }

cout<<"\nPrinting array elements";
for(int i=0;i<n;i++)
        {
        for(int j=0;j<n;j++)
        {
        if(i==j)
                {
                 cout<<a[i][j]<<endl;           
                 sum=sum+a[i][j];
                }
        }
        }
cout<<"\nSum of diagonal elements is"<<sum;

cin>>d;
return 0;
}

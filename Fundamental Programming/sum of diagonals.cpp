using namespace std;

#include<iostream>
int main()
{
int d,a[50][50],n,sum=0,c=0;    
cout<<"Enter the size of array ";
cin>>n;
cout<<"\nEnter the array";
for(int i=0;i<n;i++)
        {
                    for(int j=0;j<n;j++)
                    {

                    cin>>a[i][j];
                    }
        }
for(int i=0;i<n;i++)
        {
                    for(int j=0;j<n;j++)
                    {
                    if(i==j)
                    {
                    sum=sum+a[i][j];
                    }
                    
        }
        cout<<sum;
for(int i=0;i<n;i++)
                    if(i!=n/2)
                    {
                    sum=sum+a[i][n-1-c];
                    }
                    c++;
                    }
  cout<<"Sum of all diagonals"<<sum;
cin>>d;
return 0;
}



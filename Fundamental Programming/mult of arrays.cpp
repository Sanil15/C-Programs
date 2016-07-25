using namespace std;
#include<iostream>
int main()
{
int d,a[50][50],b[50][50],c[50][50],m,n,p,l=0;
cout<<"Enter the size m*n of first array";
cin>>m>>n;
cout<<"Enter the size n*p of first array";
cin>>n>>p;
cout<<"Enter the first array";
for(int i=0;i<m;i++)
        {
                    for(int j=0;j<n;j++)
                            {
                            cin>>a[i][j];                                
                            
                            }
        }

cout<<"Enter the second array";
for(int i=0;i<m;i++)
        {
                    for(int j=0;j<n;j++)
                            {
                            cin>>b[i][j];                                
                            
                            }
        }
for(int i=0;i<m;i++)
        {
                    for(int j=0;j<n;j++)
                            {
                            for(int k=0;k<p;k++)
                                   {
                                        l=l+(a[i][k]*b[k][j]);
                                        c[i][j]=l;
                                        l=0;
                                        }
                                        }
                                        }    
cout<<"ARRAY REULT IS \n";
for(int i=0;i<m;i++)
        {
                    for(int j=0;j<p;j++)
                            {
                            cout<<c[i][j];                                
                            
                            }
        }


cin>>d;
return 0;    
}

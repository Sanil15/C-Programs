using namespace std;
#include<iostream>
int main()
{                  
int a[50],n,d;    
cout<<"Enter the size of an array ";
cin>>n;
cout<<"Enter array in an sorted order";

for(int i=0;i<n;i++)
        {
        cin>>a[i];            
        }
int c=0;        
for(int j=a[0];j>=1;j--)
        
                     {
        for(int i=0;i<n;i++)             
                             {
                             while(a[i]%j==0)
                                                         {
                                                          if(c==n)
                                                          {
                                                          cout<<"HCF"<<j;
                                                          break;
                                                          }
                                                          c++;
                              }
                              }
cin>>d;
return 0;
}
}




















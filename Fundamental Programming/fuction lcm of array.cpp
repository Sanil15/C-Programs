using namespace std;
#include<iostream>
int Lcm(int [],int);
int main()
{
int d,a[100],n,l;
cout<<"Enter size of array ";
cin>>n;
cout<<"enter the array";
for(int i=0;i<n;i++)
        {
        cin>>a[i];            
        }
l=Lcm(a,n);
cout<<"Lcm of numbers is "<<l;
cin>>d;
return 0;
}
int Lcm(int a[],int n)
{
int c=a[0],k=0;
for(int i=0;i<n;i++)
        {
        if(a[i]>c)
                  {
                  c=a[i];    
                  }            
        
        }

for(int i=c;;i=i+c)
{
        k=0;
                for(int j=0;j<n;j++)
                {
                        if(a[j]%i==0)
                        {
                        k++;          
                        }        
                     
                         if(k==n)
                         {        
                          return i;        
                         }        
             }
}

}


















    


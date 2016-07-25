using namespace std;

#include<iostream>
int main()
{
int d,a[50][50],sum,n;    
float avgs=0,avgc=0,b[50],c[5];
b[0]=c[0]=0;
cout<<"Enter the number of students ";
cin>>n;
cout<<"Enter repective five subject marks"<<endl;
for(int i=0;i<n;i++)
                 {
                 cout<<"Enter details for roll no  "<<i+1<<"  : ";
                 for(int j=0;j<5;j++)
                 {
                  
                  cin>>a[i][j];       
                 }       
                 }
                 
for(int i=0;i<n;i++) 
        {
        for(int j=0;j<5;j++)
        {
        avgs=avgs+a[i][j];        
        }         
        b[i]=avgs/5;
        avgs=0;    
        }

for(int i=0;i<5;i++)
        {
        for(int j=0;j<n;j++)
        {
        avgc=avgc+a[j][i];        
        }         
        c[i]=avgc/n;
        avgc=0;    
        }


for(int i=0;i<n;i++)
        {
        cout<<"Average for student   "<<i<<"   -  "<<b[i]<<endl;
        }       
for(int i=0;i<5;i++)
        {
        cout<<"Average for class for subject  "<<i<<"  -  "<<c[i]<<endl;
        }       
cin>>d;
return 0;
}

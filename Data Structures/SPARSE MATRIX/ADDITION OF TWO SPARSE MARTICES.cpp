#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
int oup;
int m,n;    

cout<<"ENTER THE NUMBER OF ROWS OF SPARSE MATRICES \n";
cin>>m;
cout<<"ENTER THE NUMBER OF ROWS OF SPARSE MATRIX NO.2 \n";
cin>>n;


int** sparse1=new int*[m];
for(int i = 0; i < m; i++)
    sparse1[i] = new int[3];

cout<<"\nENTER THE FIRST SPARSE MATRIX \n";
for(int i=0;i<m;i++)
  for(int j=0;j<3;j++)
  cin>>sparse1[i][j];
  

int** sparse2=new int*[n];
for(int i = 0; i < n; i++)
    sparse2[i] = new int[3];

cout<<"\nENTER THE FIRST SPARSE MATRIX \n";
for(int i=0;i<n;i++)
  for(int j=0;j<3;j++)
  cin>>sparse2[i][j];


int count=0;
int k=1,l=1,p=1;
 int** sparse=new int*[m+n-1];
 for(int i = 0; i < m+n-1; i++)
    sparse[i] = new int[3];
  

if(sparse1[0][0]==sparse2[0][0] && sparse1[0][1]==sparse2[0][1])
{
 
  
  sparse[0][0]=sparse1[0][0];
  sparse[0][1]=sparse1[0][1];

  while(k<m && l<n)
  {
               if(sparse1[k][0]==sparse2[l][0] && sparse1[k][1]==sparse2[l][1])
               {
                sparse[p][0]=sparse1[k][0];
                sparse[p][1]=sparse1[k][1];
                sparse[p][2]=sparse1[k][2]+sparse2[l][2];                                
                p++;
                k++;
                l++; 
               }          
               
               else if (sparse1[k][0]==sparse2[l][0] && sparse1[k][1]!=sparse2[l][1])
               {
                           if(sparse1[k][1]<sparse2[l][1])
                           {
                            sparse[p][0]=sparse1[k][0];
                            sparse[p][1]=sparse1[k][1];
                            sparse[p][2]=sparse1[k][2];                                
                            p++;
                            k++;   
                           }         
                            
                           else 
                           {
                            sparse[p][0]=sparse1[l][0];
                            sparse[p][1]=sparse1[l][1];
                            sparse[p][2]=sparse1[l][2];                                
                            p++;
                            l++;   
                           }          
               }
       
                        
               else if(sparse[k][0]<sparse2[l][0])
               {
                sparse[p][0]=sparse1[k][0];
                sparse[p][1]=sparse1[k][1];
                sparse[p][2]=sparse1[k][2];                                
                p++;
                k++;   
               }         
                
               else if(sparse[k][0] > sparse2[l][0] )
               {
                sparse[p][0]=sparse1[l][0];
                sparse[p][1]=sparse1[l][1];
                sparse[p][2]=sparse1[l][2];                                
                p++;
                l++;   
               }        
               
               
  }  
  
  while(k<m)
  {
                sparse[p][0]=sparse1[k][0];
                sparse[p][1]=sparse1[k][1];
                sparse[p][2]=sparse1[k][2];                                
                p++;
                k++;           
  }
  
  while(l<n)
  {
                sparse[p][0]=sparse1[l][0];
                sparse[p][1]=sparse1[l][1];
                sparse[p][2]=sparse1[l][2];                                
                p++;
                l++;
  }
  
  sparse[0][2]=p-1;                                
}


else
cout<<"SIZE OF MATRICES DIFFER ADDITION NOT POSSIBLE !!!!! \n";
cout<<"YES";



cout<<"\nSPARSE MATRIX\n";
for(int i=0;i<p;i++){
  for(int j=0;j<3;j++){
  cout<<sparse[i][j]<<" ";
  }
  cout<<endl;
}



cin>>oup;
return 0;
}

#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
int oup;
int size=1;
int m,n;    

cout<<"ENTER THE NUMBER OF ROWS \n";
cin>>m;
cout<<"ENTER THE NUMBER OF COLUMNS \n";
cin>>n;



int** a=new int*[m];
for(int i = 0; i < m; ++i)
    a[i] = new int[n];

cout<<"\nENTER THE ORIGNAL MATRIX \n";
for(int i=0;i<m;i++)
  for(int j=0;j<n;j++){
  cin>>a[i][j];
  if(a[i][j]!=0)
  size++;
  }

int** sparse=new int*[size];
for(int i = 0; i < size; ++i)
    sparse[i] = new int[3];

sparse[0][0]=m;
sparse[0][1]=n;
sparse[0][2]=size-1;
int l=1;

for(int i=0;i<m;i++)
{  
  for(int j=0;j<n;j++){

                        if(a[i][j]!=0)
                         {
                           *(*(sparse+l)+0) =i;
                           *(*(sparse+l)+1) =j;
                           *(*(sparse+l)+2) =a[i][j];             
                           l++;
                          //sparse[j][0]=i;      
                          //sparse[j][1]=j;
                          //sparse[j][2]=a[i][j];
                          //cout<<"i: "<<i<<" j: "<<j<<" a[i][j] "<<a[i][j];        
                          //cout<<endl;
                         }

                      }
}


cout<<"\nORIGNAL MATRIX\n";
for(int i=0;i<m;i++){
  for(int j=0;j<n;j++){
  cout<<a[i][j]<<" ";
  }
  cout<<endl;
}

cout<<"\nSPARSE MATRIX\n";
for(int i=0;i<size;i++){
  for(int j=0;j<3;j++){
  cout<<sparse[i][j]<<" ";
  }
  cout<<endl;
}



int rows=sparse[0][0];
int columns=sparse[0][1];
size=sparse[0][2];
int k=1;

cout<<"\nORIGNAL MATRIX FROM SPARSE WITHOUT STORING \n";

for(int i=0;i<rows;i++){
  
  for(int j=0;j<columns;j++){
   
  
   if(k!=size+1 && sparse[k][0]==i && sparse[k][1]==j ) 
   {
   cout<<sparse[k][2]<<" ";
   k++;
   }
   
   else
   cout<<"0"<<" ";
 }
  cout<<endl;
}
cin>>oup;
return 0;
}

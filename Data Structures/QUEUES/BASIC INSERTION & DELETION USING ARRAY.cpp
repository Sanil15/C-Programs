#include<iostream>
#include<stdlib.h>

using namespace std;

int f,r,size;

void insert(int x,int p[])
{
  if(r==size-1)
  {
   cout<<"QUEUE FULL \n";            
  }
  
  else
  {
          if(f==-1 && r==-1)
          {
          f++;
          r++;
          p[f]=x;         
          }   
       
          else
          {
          r++;    
          p[r]=x;
          }
  }  
}


void del(int q[])
{
    if(f==-1 && r==-1)
    cout<<"QUEUE EMPTY!!! \n";
    
    else if(f==r)
    {
     cout<<"DELETED ELEMENT "<<q[f];    
     f=-1;
     r=-1;     
    }
    
    else
    {
    cout<<"DELETED ELEMENT "<<q[f];
    f++;    
    }
    
}

void display(int q[])
{
 if(f!=-1 && r!=-1)    
 for(int i=f;i<r;i++)
 cout<<q[i]<<" ";   
 
 else 
 cout<<"QUEUE EMPTY!!!!";  
}

int main()
{
int *p;    
cout<<"Enter the Size of Queue \n";
cin>>size;
p=new int[size];

f=-1;
r=-1;
int a=1;
int x;

while(a!=0)
{
cout<<"\n";           
cout<<"ENTER 0 TO EXIT \n";
cout<<"ENTER 1 TO INSERT AN ELEMENT IN QUEUE \n";
cout<<"ENTER 2 TO DELETE AN ELEMENT FROM QUEUE \n";
cout<<"ENTER 3 TO DISPLAY THW QUEUE \n";
cin>>a;

 if(a==1)
 {
    cout<<"Enter Element to be inserted \n";
    cin>>x;
    insert(x,p);     
 }
 
 else if(a==2)
 del(p);     
           
 else if(a==3)
 display(p);
           
}


return 0;
}

#include<iostream>
#include<stdlib.h>

using namespace std;


int main()
{
int maxp=0;
int c=1;
int pno;
int job;

cout<<"\nEnter the max priority number ";
cin>>maxp;

int** a=new int*[maxp];
for(int i = 0; i < maxp; ++i)
    a[i] = new int[10];

int* f=new int[maxp];
int* r=new int[maxp];

for(int i=0;i<maxp;i++)
{
f[i]=-1;
r[i]=-1;        
}


while(c!=0)
{
cout<<"\nPRESS 1 TO INSERT A JOB\n";
cout<<"\nPRESS 2 TO EXECUTE A JOB\n";
cout<<"\nPRESS 3 TO SEE CURRENT ORDER OF EXECTION \n";
cout<<"\nPRESS 0 TO EXIT\n";
cin>>c;

if(c==1)
 {
    cout<<"\nENTER THE JOB NUMBER ";
    cin>>job;
    cout<<endl;
    cout<<"\nENTER THE PRIORITY NUMBER\n";
    cin>>pno;        
    pno--;
    
    if(f[pno]==-1 && r[pno]==-1){
         f[pno]++;
         r[pno]++;
         a[pno][r[pno]]=job;
    }
    
    else
    {
         r[pno]++;
         a[pno][r[pno]]=job;    
    }
    cout<<"ELEMENT INSERTED FOR PRIORITY "<<pno+2<<" at "<<r[pno];   
    cout<<endl; 
 }  

else if(c==2) 
 {
  int chk=0;
  for(int i=0;i<maxp;i++)
    {
     //cout<<r[i]<<" ";
     if(r[i]>-1)
     chk++;       
    }
   
   
   if(chk!=0)
   {
    int i=0;
                 while(i<maxp)
                 {
                    if(f[i]>-1){          
                               cout<<"\nELEMENT EXECUTED FOR PRIORITY NO "<<i<<endl;
                               f[i]++;
                               break;
                               }
                    i++;           
                 }   
                 
                 if(f[i]>r[i]){
                 f[i]=-1;
                 r[i]=-1;              
                 }              
   }       
  
  else
    cout<<"\nNO JOBS FOR EXECUTION\n";
  
 }
  
 else if(c==3)
  {
  int j=0,k=0,chk=0;
 
    for(int i=0;i<maxp;i++)
    {
     if(r[i]>-1)
     chk++;       
    }
    
     
    
    if(chk==0)
    for(int i=0;i<maxp;i++)
    {
      j=f[i]; 
      if(j>-1)
      while(j<=r[i])
      {
      cout<<a[i][j]<<" ";        
      j++;
      }      
      j=0;
      k=0; 
    }  
    else
    cout<<"\nNO JOBS FOR EXECUTION\n";
  } 
  
  cout<<endl;
  cout<<endl;
  cout<<"******************************";
  cout<<"\n";
 
 int j;
    for(int i=0;i<maxp;i++)
    {
      cout<<"PRIORITY "<<i+1<<" : ";
      j=f[i]; 
      if(j>-1){
      while(j<=r[i]){
      cout<<a[i][j]<<" ";        
      j++;
      }
      }
      cout<<endl;      
      j=0;
       
    }  
 cout<<"******************************";
  cout<<endl;
   
          
}

return 0;
}

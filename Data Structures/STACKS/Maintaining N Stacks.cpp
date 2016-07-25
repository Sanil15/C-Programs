#include<iostream>
#include<stdlib.h>
#define size 200

int A[size];
int eos;

using namespace std;

    
  void push(int x,int top[],int n)
  {
          //int last=top[eos-1]+(size%eos);
          cout<<"YES";
          
          if(n==eos-1)
          {
             if(top[n] == size-1)             
                 cout<<"Stack Overflow \n";
          cout<<"YES1";

          }
          
           
          else if(top[n] == (size/eos)*n-1){
             cout<<"Stack Overflow \n";     
             cout<<"YES2";
             }
          
          
          else{
               top[n]++;
               A[top[n]]=x;      
              cout<<"YES3";
              }
              
          cout<<"YES";
  }
  
  int pop(int top[],int n)
  {
   if( top[n] == -1 )
   {
    cout<<"Stack Underflow \n";
    return -1;           
   }   
      
   return A[top[n]--];  
  }
  
      

int main()
{
int n;
int *p;
int o;
  
int a=1,x,pos;    

cout<<"Enter the no of stack \n";
cin>>n;
o=size/n;
eos=n;
p=new int[n];

for(int i=0;i<n;i++)
*(p+i)=-1+i*o;


while(a!=0)
{
cout<<"ENTER 0 TO EXIT \n";
cout<<"ENTER 1 TO PUSH AN ELEMENT \n";
cout<<"ENTER 2 TO POP AN ELEMENT \n";
cin>>a;

      if(a==1)
             {
              cout<<"ENTER THE ELEMENT TO PUSH \n";
              cin>>x;
              cout<<"ENTER THE STACK NUMBER TO ACCESS \n";      
              cin>>pos;
              cout<<"YES";
              push(x,p,pos);     
             }

      else if(a==2)
             {
             x=pop(p,pos);
             if(x!=-1)
             cout<<"Popped Element is "<<x<<endl;     
             }

}
return 0;
}

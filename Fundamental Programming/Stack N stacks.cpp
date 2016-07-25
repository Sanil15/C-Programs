#include<iostream>
#include<stdlib.h>
#define size 200

using namespace std;


int A[size];
int nos;
    
  void push(int x,int top[],int pos)
  {
          
          if(pos==nos-1)
          {
             if(top[pos] == size-1)             
                 cout<<"Stack Overflow \n";
          
          }
          
           
          else if(top[pos] == (size/nos)*(pos+1) - 1){
             
             cout<<top[pos]<<endl;
             cout<<(size/nos)*pos-1<<endl;
             cout<<"Stack Overflow \n";     
             
             }
          
          
          else{
               top[pos]++;
               A[top[pos]]=x;      
               cout<<"Element "<<x<<" Inseted at "<<top[pos]<<"\n";
              }
              
         
  }
  
  int pop(int top[],int pos)
  {
   if( top[pos] == (size/nos)*pos - 1)
   {
    cout<<"Stack Underflow \n";
    return -1;           
   }   
      
   return A[top[pos]--];  
  }
  
      

int main()
{

int *p;
int o;
int a=1,x,pos;    

cout<<"Enter the no of stack \n";
cin>>nos;
o=size/nos;
p=new int[nos];

cout<<endl;
cout<<"Size of n-1 Stacks "<<o;
cout<<endl;
cout<<"TOP VALUES: ";
for(int i=0;i<nos;i++){
*(p+i)=-1+i*o;
cout<<*(p+i)<<" ";
}
cout<<endl<<endl;
while(a!=0)
{
cout<<"\n";           
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
             
              push(x,p,pos-1);     
             }

      else if(a==2)
             {
             cout<<"ENTER THE STACK NUMBER TO ACCESS \n";      
             cin>>pos;
             x=pop(p,pos-1);
             if(x!=-1)
             cout<<"Popped Element is "<<x<<endl;     
             }

}
return 0;
}

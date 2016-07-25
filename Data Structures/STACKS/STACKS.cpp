
#include<iostream>
#include<stdlib.h>
#define size 100

using namespace std;

class stack
{
  int A[size];
  int top;
  
  public:
  stack(){
  top=-1;        
  }
  
  void push(int x)
  {
  
  if(top==size-1)
  cout<<"Stack Overflow \n";     
  
  else{
  top++;
  A[top]=x;      
  }
  
  }
  
  int pop()
  {
   if(top==-1)
   {
    cout<<"Stack Underflow \n";
    return -1;           
   }   
      
   return A[top--];  
  }
  
      
};

int main()
{
int oup;

int a=1,x;    
stack obj;

while(a!=0)
{
cout<<"ENTER 0 TO EXIT \n";
cout<<"ENTER 1 TO PUSH AN ELEMENT \n";
cout<<"ENTER 2 TO POP AN ELEMENT \n";
cout<<"ENTER 3 TO DISPLAY THE STACK \n";
cin>>a;

if(a==1)
             {
              cout<<"ENTER THE ELEMENT TO PUSH \n";
              cin>>x;      
              obj.push(x);     
             }

else if(a==2){
             x=obj.pop();
             if(x!=-1)
             cout<<"Popped Element is "<<x<<endl;     
             }

}

cin>>oup;
return 0;
}


#include<iostream>
#include<stdlib.h>

using namespace std;

int tops,n;
int tope; 
  
  void push(int x,int pos,int A[]){
  
  if(tops+1==tope)
  cout<<"Stack Overflow \n";     
  
  else{
          if(pos==0){     
             tops++;
             A[tops]=x;      
             }
          else{
             tope--;
             A[tope]=x; 
             }
           
      }
  
}  
  
  int pop(int pos,int A[])
  {
   if(pos==0)
   {
       if(tops==-1){
                   cout<<"Stack Underflow \n";
                   return -1;   
                   }
       return A[tops--];        
   }   
   
   else 
   {   
        
       if(tope==n){
                   cout<<"Stack Underflow \n";
                   return -1;   
                   }
       return A[tope++];
   }
     
   }

int main()
{

int a=1,pos,x;
int *p;
cout<<"Enter The Size of Stack \n";
cin>>n;
p=new int[n];
tops=-1;
tope=n;

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
              cout<<"ENTER 0 FROM START OR 1 FROM END \n";
              cin>>pos;
              push(x,pos,p);
             }

else if(a==2){
             cout<<"ENTER 0 FROM START OR 1 FROM END \n";
             cin>>pos;
             x=pop(pos,p);
             if(x!=-1)
             cout<<"Popped Element is "<<x<<endl;     
             }

cout<<"\nSTACK IS \n";
for(int i=0;i<n;i++)
cout<<*(p+i)<<" ";
cout<<endl<<endl;

}


return 0;
}

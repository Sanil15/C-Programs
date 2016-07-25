#include<iostream>
#include<stdlib.h>

using namespace std;



struct node{
int data;
node *next;       
};


int main()
{
int a;    
node* start=NULL;
node* top= NULL;
node* temp;
temp->next=NULL
node *p;

while(a!=0)
{
cout<<"\n";           
cout<<"ENTER 0 TO EXIT \n";
cout<<"ENTER 1 TO PUSH AN ELEMENT \n";
cout<<"ENTER 2 TO POP AN ELEMENT \n";
cin>>a;
          
if(a==1)
{
  temp = new node;

 if(temp==NULL){
                cout<<"\n STACK OVERFLOW!!! NO SPACE IN RAM";
                break;
                }

 cout<<"\nENTER THE DATA PART OF NEW NODE \n";
 cin>>temp->data;

         
         
             temp->next = top;
             top = temp;
             
         
 
 cout<<"ELEMENT INSERTED "<<temp->data<<endl;

 
}

else if(a==2)
{
     if(top==NULL)
     cout<<"\nSTACK UNDERFLOW!!!! \n";
     
     else{
          cout<<"DELETED ELEMENT "<<top->data;    
          
          p=top;
          top=top->next; 
          delete p;
                          
         } 
}



}

return 0;
}

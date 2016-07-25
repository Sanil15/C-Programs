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
node* f= NULL;
node* r= NULL;
node* temp=NULL;


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
 
 temp = new node;

 if(temp==NULL){
                cout<<"QUEUE FULL!!! NO SPACE IN RAM";
                break;
                }

 cout<<"ENTER THE DATA PART OF NEW NODE \n";
 cin>>temp->data;

         if(f==NULL && r==NULL){
           f=temp;
           r=temp;
           }
         
         else{
             r->next = temp;
             r = temp;
             }
         
 temp->next = NULL;
 cout<<"ELEMENT INSERTED "<<temp->data<<endl;
 
}

else if(a==2)
{
     if(f==NULL && r==NULL)
     cout<<"QUEUE IS EMPTY!!!! \n";
     
     else if(f==r)
      {
       cout<<"DELETED ELEMENT "<<f->data;    
       delete f;
       f=NULL;
       r=NULL;  
      cout<<endl;
      }
     
     else{
       cout<<"DELETED ELEMENT "<<f->data;    
       node* t=f;
       f=f->next;
       delete t;
          
          } 
}

else if(a==3)
{
  node *p=f;
  
  while(p!=NULL){
  cout<<p->data<<" ";
  p=p->next;     
  }
}


}

return 0;
}

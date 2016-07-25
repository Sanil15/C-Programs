#include<iostream>
#include<stdlib.h>

using namespace std;

struct node{
       int data;
       node* pre;
       node* next;
       };

int main()
{
int check=0,oup, a;    

while(a!=0)
{
cout<<"ENTER 0 TO EXIT\n";
cout<<"ENTER 1 TO ADD A NODE \n";
cout<<"ENTER 2 TO DISPLAY THE LIST \n";
cin>>a;          

node* p;
node* q;
node* start;

if(a==1&&check==0)
{
  
  start= new node;
  p=start;
  
  cout<<"ENTER THE DATA PART FIRST NODE \n";
  cin>>start->data;
  
  start->next = NULL;
  start->pre= NULL;
  check++;        
}

else if(a==1&&check!=0)
{
 node* temp;
 temp = new node;

 cout<<"ENTER THE DATA PART OF NEW NODE \n";
 cin>>temp->data;

 
 p->next = temp;
 temp->pre=p;
 p = temp;
 temp->next = NULL;
}

else if(a==2)
{
 if(check==0)
 cout<<"LINKED LIST IS EMPTY!!!! \n";
 
 else
  {
   node* q;
   q=start;
   
   while(q!= NULL){
    cout<<q->data<<" ";
    q=q->next;
     }
  cout<<endl;
  }
}

}


cin>>oup;
return 0;
}

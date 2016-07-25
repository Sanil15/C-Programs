#include<iostream>
#include<stdlib.h>

using namespace std;

struct node{
int data;
node *next;       
};


int main()
{
int oup;

int check=0, a;    

while(a!=0)
{
cout<<"ENTER 0 TO EXIT\n";
cout<<"ENTER 1 TO ADD A NODE \n";
cout<<"ENTER 2 TO DISPLAY THE LIST \n";
cout<<"ENTER 3 TO DELETE A NODE \n";
cin>>a;          
node* p;
node* start;

if(a==1&&check==0)
{
  
  start= new node;
  p=start;
  
  cout<<"ENTER THE DATA PART FIRST NODE \n";
  cin>>start->data;
  
      start->next = NULL;
  check++;        
}

else if(a==1&&check!=0)
{
 node* temp;
 temp = new node;

 cout<<"ENTER THE DATA PART OF NEW NODE \n";
 cin>>temp->data;

 
 p->next = temp;
 p = temp;
 temp->next = NULL;
}

else if(a==2)
{
 if(check==0|| start== NULL)
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

else if(a==3)
{
 if(check==0){
 cout<<"LINKED LIST IS EMPTY!!!! \n";
 break;}
 
 int i;
 
 cout<<"ENTER THE INDEX TO DELETE THE NODE \n";
 cin>>i;
 p=start;
 node* q;
 
 if(i==1)
 {
 q=p->next;
 start=q;
 delete p;
 }
 
else{
    
 p=start;    
 while(i>2)
 {
  p=p->next;
  i--;         
  }
 q=p->next;
 p->next=q->next; 
 delete q;
 }


}




}
    




cin>>oup;
return 0;
}

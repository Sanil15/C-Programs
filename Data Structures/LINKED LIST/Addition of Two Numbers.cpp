#include<iostream>
#include<stdlib.h>

using namespace std;

struct node{
int data;
node *next;       
};


void create(node **start1, int m){

int chk1=0;
node* p;
node* temp;
p=(*start1);

while(m>0)
{
         
 
  if(chk1==0){
              
  p->data=m%10;
  (*start1)=p;
  chk1++;
  p->next=NULL;
  }
  
  else{
  temp=new node;
  temp->data=m%10;
  p->next=temp;
  p=temp;    
  temp->next=NULL;
  }
  
  m=m/10;      
    
}
    
}

void display(node* start2)
{
node* d;

cout<<"\n NUMBER     : ";
  
  d=start2;
  while(d!= NULL)
    {
     cout<<d->data;
     d=d->next;
     }
     
  cout<<endl;

     
}


int main(){
int oup;

int n,m,i;

cout<<"Enter Number 1 ";
cin>>m;
cout<<endl;
cout<<"Enter Number 2 ";
cin>>n;
cout<<endl;

node *start1=new node;
node *start2=new node; 
node *start=new node; 


node* p;
node* q;
node* r;
node* d;
node *temp;

int chk=0;

create(&start1,m);
create(&start2,n);

display(start1);
display(start2);

p=start1;
q=start2;
r=start;
r->next=NULL;
int carry=0;
int add=0;

while(p!=NULL && q!=NULL)
{
  
  temp= new node;
  r->next=temp;
  r=temp;
  r->data = p->data + q->data + add ;
  
  while (temp->data >= 10)
  {
  r->data=r->data-10;
  carry=carry+1;      
  }
  
  add=carry;          
       
  carry=0;
  p=p->next;
  q=q->next;
  r->next=NULL;
  
}

int last=0;

while(p!= NULL)
{
         
  temp= new node;
  r->next=temp;
  r=temp;
  r->data = p->data + add ;
  
  
  while (temp->data >= 10)
  {
  r->data=r->data-10;
  carry=carry+1;      
  }
  
  if(carry>0)
  add=carry;          
           
  else 
  add=0;
  
  
  carry=0;
  p=p->next;
  r->next=NULL;
  
}



while(q!= NULL)
{
         
  temp= new node;
  r->next=temp;
  r=temp;
  r->data = q->data + add ;
  
  
  while (temp->data >= 10)
  {
  r->data=r->data-10;
  carry=carry+1;      
  }
  
  if(carry>0)
  add=carry;          
           
  else 
  add=0;
  
  
  carry=0;
  q=q->next;
  r->next=NULL;
  
  
}

if(add!=0)
{
  temp= new node;
  r->next=temp;
  temp->data=add;
  temp->next=NULL;        

}



start=start->next;


cout<<endl;
cout<<"\t      --------------";
cout<<"\n ADDITION   : ";

  d=start;
  while(d!= NULL)
    {
     cout<<d->data;
     d=d->next;
     }
  cout<<endl;

cin>>oup;
}


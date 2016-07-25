#include<iostream>
#include<stdlib.h>

using namespace std;

struct node{
int data;
int power;
node* next;
};


void multiply(node* start1, node* start2, node** start3)
{
         int r,v,flag=0;
         node* temp;
         (*start3)= new node;
          node* p= *start3;
          p->next= NULL;
          
          node* q;        
          node* i=start1;
          node* j=start2;
          
          int check=0;
    
          while(i!=NULL)
          {          
           
                   while(j!=NULL)
                   {
                   
                   r=i->power + j->power;
                   v=i->data * j->data;
                   q=*start3;
                  
                               while(q!= NULL)
                               {
                                    if(q->power==r){
                                    q->data=q->data+v;
                                    flag++;
                                    }
                               q=q->next;
                               
                               } 
                               if(flag==0){
                                    temp= new node;
                                    p->next=temp;
                                    p=temp;
                                    temp->next= NULL;             
                                    
                                    p->data=v;
                                    p->power=r;                 
                                    }
                                    
                   j=j->next;          
                   flag=0;
                   } 
                  i=i->next;
                  j=start2;
          }
          
(*start3)=(*start3)->next;

}


void add(node* start1, node* start2, node** start3)
{
     (*start3)= new node;
      node* p= *start3;
      (*start3)->next= NULL;
     int flag=0;
     node* i=start1;
     node* j=start2;
     node *temp;
     while(i!= NULL && j!= NULL)
     {
     
     if(flag!=0)
     {
       
      temp= new node;
      p->next=temp;
      p=temp;
      temp->next= NULL;                
     }

     if(i->power==j->power)
     {
     p->power=i->power;
     p->data=i->data+j->data;
                    
     i=i->next;
     j=j->next;
     }
     
     else if(i->power > j->power)
     {
     p->power=i->power;
     p->data=i->data;            
     
     i=i->next;
     }
     
     
     else if(i->power < j->power)
     {
     
     p->power=j->power;
     p->data=j->data;
                    
     j=j->next;            
     
     }
      cout<<p->data<<""<<p->power<<",";
      flag++;
     }
     
     
     while(i!= NULL)
     {
      node* temp= new node;
      p->next=temp;
      p=temp;
      temp->next= NULL;                
     
      p->power=i->power;
      p->data=i->data;            
      i=i->next;
    
           
     }
     
     while(j!= NULL)
     {
      node* temp= new node;
      p->next=temp;
      p=temp;
      temp->next= NULL;                
     
      p->power=j->power;
      p->data=j->data;              
      j=j->next;            
     
                   
     }
}


void incr(int x,node* start)
{
     node* p;
     p=start;
     

     while(p!= NULL)
     {
     p->data=p->data+2;            
     p=p->next;
     }
     
}

void create(int n, node** start)
 {
 (*start)= new node;
 node* p;
 
 cout<<"ENTER THE COEFFICIENT OF POWER "<<n<<endl;
 cin>>(*start)->data;
 (*start)->next= NULL;
 (*start)->power=n;
 p=*start;
 n--;
 
 while(n>=0)
  {
    int co;
    node* temp;
    cout<<"ENTER THE COEFFICIENT OF POWER "<<n<<endl;
    cin>>co;
    
    if(co!=0)
    {
     temp=new node;
     temp->data=co;
     temp->power=n;
     
     p->next=temp;
     temp->next= NULL;
     p=temp;           
    }
    n--;   
  }
 
 }
 
 void display(node* start)
 {
 node* q;
   q=start;
   
   while(q!= NULL){
      cout<<q->data<<" "<<q->power<<" , ";
    q=q->next;
     }
  cout<<endl;     
      
 }

int main()
{
int oup;
int n,m;
    
cout<<"ENTER THE HIGHEST DEGREE OF POLYNOMIAL \n";
cin>>n;
node* start1=NULL;
if(n!=0)
create(n,&start1);


cout<<"ENTER THE HIGHEST DEGREE OF POLYNOMIAL \n";
cin>>m;

node* start2=NULL;
if(m!=0)
create(m,&start2);

cout<<"\n First Polynomial :";
display(start1);

cout<<"\n Second Polynomial :";
display(start2);

//incr(2, start1);
//incr(3, start2);
/*
cout<<"\n First Polynomial Incremented :";
display(start1);

cout<<"\n Second Polynomial Incremented : :";
display(start2);
*/
node *start3=NULL;

add(start1,start2,&start3);
cout<<"\nThird polynomial addition  ";
display(start3);

multiply(start1,start2,&start3);
cout<<"\nFourth polynomial multiplication  ";
display(start3);

cin>>oup;
return 0;
}

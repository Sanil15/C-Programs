#include<iostream>
#include<stdlib.h>

using namespace std;
struct node{
node* left;
node* right;       
int value;
int LH;
int RH;            
};

void insert(node **start,node* temp)
{

if((*start)==NULL)
 {
  (*start)=temp; 
 }
 
else if(temp->value > (*start)->value)
 {
  if( (*start)->right==NULL )
   (*start)->right=temp;
   
  
  else 
    insert(&(*start)->right,temp);  
 } 
 
else 
 {
   if((*start)->left==NULL)
   (*start)->left=temp;
   
   else
   insert(&(*start)->left,temp);      
 } 

}

void display(node* start)
{
 if(start!=NULL)
 {
     display(start->left);
     cout<<start->value<<" "<<" LH: "<<start->LH<<" RH: "<<start->RH<<endl;
     display(start->right);
 }     
 
}

int height(node *start, int val)
{

if(start->value==val)
  return start->RH>=start->LH?(start->RH):(start->LH);   

else if(start->value > val)
{ start->LH=height(start->left,val)+1;
  return (start->LH);
}

else
{
  start->RH=height(start->right,val)+1;        
  return (start->RH);
}
}


int main()
{

node* start=NULL;
int a;

while(a!=0)
{
cout<<"\nENTER 1 TO INSERT A NODE\n";
cout<<"\nENTER 2 TO DISPLAY INFIX WITH HIEGHT \n";
cout<<"\nENTER 0 TO EXIT\n";
cin>>a;

if(a==1)
{
int k;
node* temp=new node;
cout<<"ENTER THE VALUE OF NODE";     
cin>>k;
temp->value=k;
temp->right = NULL;
temp->left = NULL;
temp->LH=0;
temp->RH=0;
insert(&start,temp);
height(start,k);
}

else
display(start);           
           
}

return 0;
}

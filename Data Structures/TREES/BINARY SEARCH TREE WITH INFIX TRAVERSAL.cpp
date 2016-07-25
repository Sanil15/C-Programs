#include<iostream>
#include<stdlib.h>

using namespace std;
struct node{
node* left;
node* right;       
int value;
};

void insert(node **start)
{
node* temp=new node;
cout<<"ENTER THE VALUE OF NODE";     
cin>>temp->value;
temp->right = NULL;
temp->left = NULL;

if((*start)==NULL)
 {
  (*start)=temp;                 
 }
 
else if(temp->value > (*start)->value)
 {
  if( (*start)->right==NULL )
   (*start)->right=temp;
  
  else 
    insert(&(*start)->right);  
 } 
 
else 
 {
   if((*start)->left==NULL)
   (*start)->left=temp;
   
   else
   insert(&(*start)->left);      
 } 

}

void display(node* start)
{
 if(start!=NULL)
 {
     display(start->left);
     cout<<start->value<<" ";
     display(start->right);
 }     
 
}

int main()
{

node* start=NULL;
int a;

while(a!=0)
{
cout<<"\nENTER 1 TO INSERT A NODE\n";
cout<<"\nENTER 2 TO DISPLAY INFIX\n";
cout<<"\nENTER 0 TO EXIT\n";
cin>>a;

if(a==1)
insert(&start);

else
display(start);           
           
}

return 0;
}

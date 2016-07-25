#include<iostream>
#include<stdlib.h>

using namespace std;
struct node{
node* left;
node* right;       
int value;
};

node *glob=NULL;

node* search(node *start,int val)
{
 
  node *tem; 
  
  if(glob==NULL)
  { glob=start; }
  
  if(start== NULL){
     return NULL;
   }
 
  else if(start->value==val)
     return start;
  
  else 
  {
    if(start->value < val){
      glob=start;
      tem = search(start->right, val);
      }
    
    else{   
      glob=start;
      tem = search(start->left, val);
      }
  
    
    return tem;              
  }    
  
  
}


int del(node **start, int val)
{    
  int chk=0;
  node* temp;
  node* temp1;
  node* p;
  temp=search((*start),val);
  cout<<temp->value<<endl;
  cout<<glob->value;
    
  
                 if(temp->left==NULL && temp->right==NULL)
                 {
                   if(glob->left==temp)
                   glob->left=NULL;
                   
                   else
                   glob->right=NULL;
                   
                   delete temp;    //start will be covered in same case      \
                   return 1;         
                 }
  
                
                else if(temp->right!=NULL && temp->left!=NULL)
                  {
                          p=temp->right;
                          
                          if(p->left!=NULL)
                          {
                             while(p!=NULL)
                             {
                             glob=temp1;
                             temp1=p;
                             p=p->left;             
                             }         
                             temp->value=temp1->value;
                             glob->left=NULL;
                             delete temp1;
                             return 1;    
                          }  
                          
                          else
                             chk++;
                          
                          p=temp->left;
                    
                          if(p->right!=NULL)
                          {
                             while(p!=NULL)
                             {
                             glob=temp1;              
                             temp1=p;
                             p=p->right;             
                             }         
                             temp->value=temp1->value;
                             glob->right=NULL;
                             delete temp1;
                             return 1;    
                          }  
                          
                          else
                             chk++;
                          
                          
                    if(chk==2 )//SKEWED CASE
                          {
                           p=temp->right;
                           temp->value=p->value;
                           temp->right=p->right;
                           delete p;  
                           return 1;                    
                          }
                          
                  }
                  
                  else if(temp->left==NULL)
                  {
                  
                           if(temp==(*start))
                           {
                              *start=temp->right;
                              delete temp;           
                           }
                          
                           else
                           {   
                             p=temp->right;
                             temp->value=p->value;
                             temp->right=p;
                             delete p;
                           }   
                      
                  return 1;
                  }
                      
                  else if(temp->right==NULL)
                  {
                  
                          if(temp==(*start))
                          {
                             *start=temp->left;
                             delete temp;            
                          }
                          
                          else
                          {
                          p=temp->left;
                          temp->value=p->value;
                          temp->left=p;
                          delete p;
                          }
                  
                  return 1;
                  }
             
                      
  return 0;
    
}


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
cout<<"\n\n\nENTER 1 TO INSERT A NODE\n";
cout<<"\nENTER 2 TO DISPLAY INFIX\n";
cout<<"\nENTER 3 TO DELETE\n";
cout<<"\nENTER 4 TO SEARCH\n";
cout<<"\nENTER 0 TO EXIT\n";
cin>>a;

if(a==1)
insert(&start);

else if(a==2)
display(start);           

else if(a==3)
{
int d;
cout<<"ENTER VALUE TO DELETE ";
cin>>d;     
del(&start,d);           
}

else if(a==4)
{
int d;
cout<<"ENTER VALUE TO SEARCH ";
cin>>d;     
node* t=search(start,d);
cout<<t->value<<endl;           
cout<<glob->value;     
}

}

return 0;
}

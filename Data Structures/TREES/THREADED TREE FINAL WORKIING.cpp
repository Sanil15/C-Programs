#include<iostream>
#include<stdlib.h>

using namespace std;

struct node{
int data;       
node* left;
node* right;       
int val;
};


node* start=NULL;

void insert(node **parent, node* temp)
{
     
if(start==NULL)
 {
   start=temp;
   *parent=temp;                 
 }

else if(temp->data > (*parent)->data)
{
  if( (*parent)->right==NULL)
  {
            (*parent)->right=temp;
             temp->left=(*parent);
             temp->val=temp->val+1;
            
  }
  
  /*else if((*parent)->val==1 && )
  {
            temp->left=(*parent)->left;
            (*parent)->left=temp;
            (*parent)->val=(*parent)->val-1;
  }*/
  
    else if((*parent)->val ==2 || (*parent)->val ==3)
  {
            temp->right=(*parent)->right;
            temp->left=(*parent);
            (*parent)->right=temp;
            (*parent)->val=(*parent)->val-2;
            temp->val=temp->val+3;
  }
   
  
  else
  { 
            insert(&(*parent)->right,temp);  
  } 
          
}

else
{
  if( (*parent)->left==NULL)
  {
            (*parent)->left=temp;
             temp->right= (*parent);
             temp->val +=2;                       
             
  }
  
  /*else if((*parent)->val==2)
  {
            temp->right=(*parent)->right;
            (*parent)->right=temp;
            (*parent)->val=(*parent)->val-2;
  }*/

  else if((*parent)->val==1 || (*parent)->val==3)
  {
            temp->left=(*parent)->left;
            temp->right=(*parent);
            (*parent)->left=temp;
            (*parent)->val=(*parent)->val-1;
            temp->val=temp->val+3;
  }

  
  else
  { 
            insert(&(*parent)->left,temp);  
  }    

}
 cout<<endl<<endl;
 cout<<"DATA NODE INSETED "<<temp->data<<"  THREADING VAL "<<temp->val<<endl<<endl;

}


void traverse(node* start)
{
     if(start!=NULL)
 {
     if(start->val!=1 && start->val!=3)
     traverse(start->left);
     cout<<start->data<<" "<<"THREADING : "<<start->val<<endl;
     if(start->val!=2 && start->val!=3)
     traverse(start->right);
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

if(a==1){
node* temp=new node;
cout<<"ENTER THE VALUE OF NODE";     
cin>>temp->data; 
temp->right = NULL;
temp->left = NULL;
temp->val=0;
         
insert(&start,temp);
}


else if(a==2)
traverse(start);           
}

return 0;
}

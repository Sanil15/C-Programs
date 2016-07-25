
int chk=0;
node* pre;


void insert(node **start)
{
node* temp=new node;
cout<<"ENTER THE VALUE OF NODE";     
cin>>temp->value;
temp->right = NULL;
temp->left = NULL;
temp->no=0;

if((*start)==NULL)
 {
  (*start)=temp;
   pre=temp;                 
 }
 
else if(temp->value > (*start)->value)
{
  if( (*start)->right==NULL )
   (*start)->right=temp;
  
  else if((*start)->right==pre)
   {
   (*start)->right=temp;
   temp->no=0;    
   }
  
  else
    { 
    pre=(*start)->right;
    insert(&(*start)->right);  
    } 
  
  if(temp->no==0 && *start!=temp)
  {
       (*start)->right=temp;
        temp->left=pre;
        temp->no=temp->no+1;     
  } 
       
  cout<<"RIGHT "<<temp->value<<" "<<"THREADING : "<<temp->no<<" PRE: "<<pre->value<<endl;   
} 
 
else 
 {
   if((*start)->left==NULL)
   (*start)->left=temp;
   
   else if((*start)->left==pre)
   {
   (*start)->left=temp;
   temp->no=0;    
   }
   
   else
   {
   pre=(*start)->left;
   insert(&(*start)->left);      
   }

   if(temp->no==0 && *start!=temp)
   {            
   (*start)->left=temp;             
   temp->right=pre;
   temp->no=temp->no+2;
   }
   
   cout<<"LEFT "<<temp->value<<" "<<"THREADING : "<<temp->no<<" PRE: "<<pre->value<<endl;
 } 

}

void display(node* start)
{
 if(start!=NULL)
 {
     display(start->left);
     cout<<start->value<<" "<<"THREADING : "<<start->no<<endl;
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

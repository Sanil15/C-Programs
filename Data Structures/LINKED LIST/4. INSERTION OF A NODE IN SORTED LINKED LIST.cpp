#include<iostream>
#include<stdlib.h>

using namespace std;

struct node{
int data;
node *next;       
};

int main(){
int oup;

int check=0, a;    

while(a!=0)
{
cout<<"ENTER 0 TO EXIT\n";
cout<<"ENTER 1 TO ADD A NODE IN SORTED MANNER \n";
cout<<"ENTER 2 TO DISPLAY THE LIST \n";
cin>>a;          
node* p;
node* start;
node* temp;
node* temp2;

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
             int n=0;
             temp = new node;
            
             cout<<"ENTER THE DATA PART OF NEW NODE \n";
             cin>>temp->data;
            
              p=start; 
            
              while(p->data < temp->data && p!= NULL)
               {
                p=p->next;
                n++;           
                
                if(p== NULL)
                break;
               }
               
             if(n==0)
              {
                 temp->next=p;
                 start=temp;                            
              }   
                  
                        
             else if(n>0)
              {
                      p=start;
                      while(n>1){
                      p=p->next;
                      n--;
                                 }
                 temp->next=p->next;
                 p->next=temp;    
            
                   
              }
               
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

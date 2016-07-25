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

while(a!=3)
{
cout<<"ENTER 0 TO ADD A NODE AT FIRST POSITION\n";
cout<<"ENTER 1 TO ADD A NODE AT LAST POSITION \n";
cout<<"ENTER 2 TO DISPLAY THE LIST \n";
cout<<"ENTER 3 TO EXIT!!! \n";

cin>>a;          
node* p;
node* start;


if(a==0)
{
                      if(check!=0)
                      {
                      node* temp;
                      temp = new node;
                      cout<<"ENTER THE DATA PART FIRST NODE \n";
                      cin>>temp->data;
                      temp->next=start;
                      start=temp; 
                      }
                      
                      else if(check==0)
                      {
                       cout<<"LIST EMPTY SO START NODE IS INSERTED \n";
                       start=new node;
                       cout<<"ENTER THE DATA PART FIRST NODE \n";
                       cin>>start->data;
                       start->next = NULL;
                       check++;
                      }       
}

else if(a==1)
{
                      if(check!=0)
                       {
                          node* temp;
                          temp = new node;
                          cout<<"ENTER THE DATA PART OF LAST NODE \n";
                          cin>>temp->data;
                          p=start;
                          while(p->next!= NULL)
                          p=p->next;
                          p->next=temp;
                          temp->next= NULL;
                     
                      }
                    
                     else if(check==0)
                      {
                           cout<<"LIST EMPTY SO START NODE IS INSERTED \n";
                           start=new node;
                           cout<<"ENTER THE DATA PART FIRST NODE \n";
                           cin>>start->data;
                           start->next = NULL;
                           check++;
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
           
            while(q!= NULL)
            {
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

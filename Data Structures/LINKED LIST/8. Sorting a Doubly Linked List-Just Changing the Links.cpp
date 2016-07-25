#include<iostream>
#include<stdlib.h>

using namespace std;

struct node{
       int data;
       node* pre;
       node* next;
       };


int main()
{
int oup;

int check=0, a;    

while(a!=0)
{
cout<<"ENTER 0 TO EXIT\n";
cout<<"ENTER 1 TO ADD A NODE \n";
cout<<"ENTER 2 TO DISPLAY THE SORTED LINKED LIST \n";
cin>>a;          

node* p;
node* q;
node* start;
node* start1;
node*l;

                        if(a==1&&check==0)
                        {
                          
                          start= new node;
                          p=start;
                          
                          cout<<"ENTER THE DATA PART FIRST NODE \n";
                          cin>>start->data;
                          
                          start->next = NULL;
                          start->pre= NULL;
                          check++;        
                        }
                        
                        else if(a==1&&check!=0)
                        {
                         node* temp;
                         temp = new node;
                        
                         cout<<"ENTER THE DATA PART OF NEW NODE \n";
                         cin>>temp->data;
                        
                         
                         p->next = temp;
                         temp->pre=p;
                         p = temp;
                         temp->next = NULL;
                        }

        else if(a==2)
         {
         
         if(check==0)
         cout<<"LINKED LIST IS EMPTY!!!! \n";
         
         else
         {
              int chk=0;
                                    
              while(start != NULL)
              {   
                        
                         p=start;
                         q=start;
                         node* temp;
                         node* temp1;
                       
                                  
                            while(p->next!=NULL)
                             {
                              
                              if(q->data > p->next->data)
                                   q=p->next;
                          
                                p=p->next;         
                             }
                              
                              if(q==start)
                              {
                              
                                 start=start->next;
                                 if(start!= NULL)
                                     start->pre=NULL;
                              }
                              
                              else if(q->next== NULL)
                              {
                                 temp=q;
                                 temp=temp->pre;
                                 temp->next=NULL;          
                              }
                              
                              else
                              {
                                 temp=q;      
                                 temp1=q;
                                 temp=temp->pre;
                                 temp1=temp1->next;
                                 temp->next=temp1;
                                 temp1->pre=temp;    
                              }
                              
                              
                              if(chk==0)
                              {
                                 start1=q;
                                 q->next= NULL;
                                 q->pre= NULL;          
                                 l=start1;
                                 chk++;
                              }
                              
                              else
                              {   
                                 q->pre = l;
                                 q->next = NULL;
                                 l->next=q;
                                 l=q;
                              }
                              if(l->pre !=NULL)  
                               //cout<<l->pre->data<<" ;"<<l->data<<" , ";      
              
                     }  
                                
                              cout<<"\n"<<"SORTED LIST"<<"\n";  
                                node* d;
                                d=start1;
                               
                                while(d!= NULL)
                                {
                                  cout<<d->data<<" ";
                                  d=d->next;
                               }
                              cout<<endl;
        
                          }
}

}    




cin>>oup;
return 0;

}

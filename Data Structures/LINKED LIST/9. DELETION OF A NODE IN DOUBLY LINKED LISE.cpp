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
cout<<"ENTER 2 TO DELETE A NODE LINKED LIST \n";
cin>>a;          


node* q;
node* start;
node* p;

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
         int chk;
         cout<<"ENTER THE DATA YOU WANT TO DELETE";
         cin>>chk;    
              
                                    
                        
                         q=start;
                         node* temp;
                         
                                  
                            while(q!=NULL)
                             {
                              
                              if(chk==q->data)
                                   break;
                          
                                q=q->next;         
                             }
                              
                              if(q==start)
                              {       
                                 start->next->pre=NULL;
                                 start=start->next;
                                 delete q;
                              }
                          
                              else
                              {         
                                 q->pre->next=q->next;
                                 if(q->next!= NULL)
                                 q->next->pre=q->pre;
                                 delete q;  
                              }
                                
                              cout<<"\n"<<"REMAINING LIST"<<"\n";  
                                node* d;
                                d=start;
                               
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

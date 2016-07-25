#include<iostream>
#include<stdlib.h>

using namespace std;

class queue
{
 int f,r,size;

public:
        
        queue()
        {
        f=-1;
        r=-1;       
        }       
 
        void set(int x){
        size=x;}

        void insert(int x,int p[])
        {
          if(r==size-1 && f>0)
          r=-1;
          
          if((r==size-1 && f==0) || f-r==1)
          {
           cout<<"\nQUEUE FULL \n";            
          }
          
          else
          {
                  /*if(r==size-1) alternative for r=-1
                  {
                        r++;
                        p[r]=x;
                        }*/            
                  if(f==-1 && r==-1)
                  {
                  f++;
                  r++;
                  p[f]=x;         
                  }   
                  
                  else if( f-r!=1)
                  {
                  r++;    
                  p[r]=x;     
                  }
                  
           cout<<"\nELEMENT "<<x<<" INSETED AT "<<r<<" f: "<<f<<" r: "<<r<<endl;                 
          }  
        }


        void del(int q[])
        {
            if(f==size-1)
            f=-1;
            
            if(f==-1 && r==-1)
            cout<<"QUEUE EMPTY!!! \n";
            
            else if(f==r)
            {
             cout<<"\nDELETED ELEMENT "<<q[f]<<endl;    
             q[f]=-1;
             f=-1;
             r=-1;     
            }
            
            else
            {
            cout<<"\nDELETED ELEMENT "<<q[f]<<endl;
            q[f]=-1;
            f++;    
            }
            
        }

        void display(int q[])
        {
         if(f!=-1 && r!=-1)   
         { 
                 cout<<"\nCIRCULAR QUEUE IS \n";
                 if(r>f){
                 for(int i=f;i<=r;i++)
                 cout<<q[i]<<" ";   
                 }
                 
                 else
                 {
                 for(int i=f;i<size;i++)
                 cout<<q[i]<<" ";   
                 
                 for(int i=0;i<=r;i++)
                 cout<<q[i]<<" ";   
                     
                 
                 }
                 cout<<endl;
         }
         else 
         cout<<"\nQUEUE EMPTY!!!!\n";  
        }

};

int main()
{
int *p; 
int size,a=1,x;   

cout<<"Enter the Size of Queue \n";
cin>>size;
p=new int[size];

queue obj;
obj.set(size);

while(a!=0)
{
cout<<"\n";           
cout<<"ENTER 0 TO EXIT \n";
cout<<"ENTER 1 TO INSERT AN ELEMENT IN QUEUE \n";
cout<<"ENTER 2 TO DELETE AN ELEMENT FROM QUEUE \n";
cout<<"ENTER 3 TO DISPLAY THW QUEUE \n";
cin>>a;

 if(a==1)
 {
    cout<<"Enter Element to be inserted \n";
    cin>>x;
    obj.insert(x,p);     
 }
 
 else if(a==2)
 obj.del(p);     
           
 else if(a==3)
 obj.display(p);
           
}


return 0;

}

#include<iostream>
#include<stdlib.h>
#include<string.h>
#define size 100

using namespace std;

struct element{
char a[5];
};

element s[size];
element p[size];
element stack[size];
int top=-1;


int priority(char a[])
{

if(strcmp("++",a)==0)
 return 7; 
 
else if (strcmp("--",a)==0)
 return 7;

else if ('^'==a[0])
 return 6;

else if ('/'==a[0])
 return 5;

else if ('*'==a[0])
 return 5;

else if ('%'==a[0])
 return 5;

else if ('+'==a[0])
 return 4;

else if ('-'==a[0])
 return 4;

else if (strcmp("<=",a)==0)
 return 3;

else if (strcmp(">=",a)==0)
 return 3;

else if ('>'==a[0])
 return 3;

else if ('<'==a[0])
 return 3; 
 
else if (strcmp("!=",a)==0)
 return 2;

else if (strcmp("==",a)==0)
 return 2;   

else if (strcmp("&&",a)==0)
 return 1;

else if (strcmp("||",a)==0)
 return 1;   

return 0;    
}


void push(element x)
{
  if(top==size-1)
  cout<<"Stack Overflow \n";     
  
  else{  
  top++;
  stack[top]=x;      
  }
}
  
element pop()
{        
   return stack[top--];  
}


int main()
{

int oup;
char infix[200];
cout<<"Enter the String";
gets(infix);
int l=strlen(infix);

int j=0,k=0,chk=0;

for(int i=0;i<l;i++)
{
      while((infix[i]>64 && infix[i]<91) || (infix[i]>96 && infix[i]<123))
      {   
       s[j].a[k]=infix[i];
       i++;
       k++;        
       chk=1;
      }
        
       if(chk==1){
       s[j].a[k]='\0';    
       j++;
       }
   
   if(infix[i]=='('|| infix[i]=='%'|| infix[i]==')'|| infix[i]=='^'|| infix[i]=='/'|| infix[i]=='*'|| infix[i]=='+'|| infix[i]=='-'|| (infix[i]=='>'&& infix[i+1]!='=') || (infix[i]=='<'&& infix[i+1]!='=') )
   {
    s[j].a[0]=infix[i];
    s[j].a[1]='\0';    
    j++;
   }
   
   else 
   {
    s[j].a[0]=infix[i];    
    s[j].a[1]=infix[i+1];
    s[j].a[2]='\0';
    j++;
    i++;
   }
   
   k=0;
   chk=0;
       
}

cout<<"INFIX IS ";
for(int i=0;i<=j;i++)
cout<<s[i].a;

cout<<endl;
k=0;

for(int i=0;i<=j;i++)
{
  if((s[i].a[0]>64 && s[i].a[0]<91) || (s[i].a[0]>96 && s[i].a[0]<123))
  {   
    p[k]=s[i];;
    k++;        
  }
     
  else
  {
    if(top==-1)
            {
                push(s[i]);          
            }       
    
    else if(s[i].a[0]=='(')
            {
                 push(s[i]);
            
            }
            
    else if(s[i].a[0]==')')
            {
                 int l=top;
                 while(l>-1)
                 {
                   if( stack[l].a[0]=='(' )           
                    break;    
                   
                   l--; 
                 }
            
                 
                 while(l<top)
                 {
                  p[k]=pop();
                  k++;       
                 }
                 pop();
            
             }  
          
          
             
     else
          {
                
           int sval=priority(stack[top].a);
           int eval=priority(s[i].a);    
           
           //cout<<"SVAL "<<stack[top].a<<" "<<sval<<endl;
           //cout<<"EVAL "<<s[i].a<<" "<<eval<<endl;
           
           if(sval==eval || sval>eval)
            {
            //cout<<"ELEMENT PUSHED IF"<<endl;
                      while(sval>=eval)
                                       {
                                       //cout<<"SVAL NEW "<<stack[top].a<<" "<<sval<<endl;
                                       p[k]=pop();
                                       k++;  
                                       
                                       if(stack[top].a[0]=='(')
                                       break;
                                       
                                       sval=priority(stack[top].a);  
                                       }
                     push(s[i]);                                        
            }
            
            else if(sval<eval || stack[top].a[0]=='('){
            //cout<<"ELEMENT PUSHED ELIF"<<endl;
            push(s[i]);
                
            }
            
             
             
     }   
  
   }//else-out    

cout<<"STACK: ";
for(int y=0;y<=top;y++)
cout<<stack[y].a;
cout<<endl;

}//for


cout<<"POSTFIX\n";
for(int i=0;i<=k;i++)
cout<<p[i].a;



cin>>oup;
return 0;     
}

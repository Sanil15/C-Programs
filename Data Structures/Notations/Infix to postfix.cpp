
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
int k;
   
void push(char x[])
{
  if(top==size-1)
  cout<<"Stack Overflow \n";     
  
  else{  
  top++;
  strcpy(stack[top].a,x);      
  }
}
  
element pop()
{        
   return stack[top--];  
}

void pm(char[] op)
{
     while(strcmp(stack[top].a,'*')==0|| strcmp(stack[top].a,'^')==0 || strcmp(stack[top].a,'/')==0 || strcmp(stack[top].a,op)==0)
                   {
                   strcpy(p[k].a,pop());
                   k++;                  
                   }     
}

void dm(char[] op)
{
         while(strcmp(stack[top].a,'^')==0|| strcmp(stack[top].a,op)==0)
                   {
                   strcpy(p[k].a,pop());
                   k++;                  
                   }
             
}

void op(char[] op)
{
       while(strcmp(stack[top].a,'*')==0|| strcmp(stack[top].a,'^')==0 || strcmp(stack[top].a,'/')==0 || strcmp(stack[top].a,'+')==0 || strcmp(stack[top].a,'-')==0 || ( strcmp(stack[top].a,'>')==0 && strcmp(op,'>')!=0 ) || ( strcmp(stack[top].a,'<')==0 && strcmp(op,'<')!=0 )|| ( strcmp(stack[top].a,'>=')==0 && strcmp(op,'>=')!=0 )|| ( strcmp(stack[top].a,'<=')==0 && strcmp(op,'<=')!=0 ))
                   {
                   strcpy(p[k].a,pop());
                   k++;                  
                   }
      
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
    
   if(chk==1)
   s[j].a[k]='\0';    
   
   else if(infix[i]=='('|| infix[i]==')'|| infix[i]=='^'|| infix[i]=='/'|| infix[i]=='*'|| infix[i]=='+'|| infix[i]=='-'|| (infix[i]=='>'&& infix[i+1]!='=') || (infix[i]=='<'&& infix[i+1]!='=') )
   {
    s[j].a[0]=infix[i];
    s[j].a[1]='\0';    
   }
   
   else 
   {
    s[j].a[0]=infix[i];    
    s[j].a[1]=infix[i+1];
    s[j].a[2]='\0';
    j++;
   }
   
   k=0;
   chk=0;
   j++;     
}




k=0;

for(int i=0;i<l;i++)
{
  
  //cout<<"INFIX[i]"<<(int)infix[i]<<endl;
  
  if((infix[i]>64 && infix[i]<91) || (infix[i]>96 && infix[i]<123))
  {   
    postfix[k]=infix[i];
    k++;         
  }
   
  else 
  {
            if(top==-1)
            {
                obj.push(infix[i]);          
            }   
            
            else if(infix[i]=='(')
            {
                 obj.push(infix[i]);
            
            }
            
            else if(infix[i]==')')
            {
                 int l=top;
                 while(l>-1)
                 {
                   if( A[l]=='(' )           
                    break;    
                   
                   l--; 
                 }
            
                 
                 while(l<top)
                 {
                  postfix[k]=obj.pop();
                  l++;     
                  k++;       
                 }
                 obj.pop();
            
            }
            
            else if(infix[i]=='^')
            {
             obj.push('^');     
            }
            
            else if(infix[i]=='*')
            {
                  dm(obj,'/');
                  obj.push('*'); 
            }
            
            else if(infix[i]=='/')
            {
                  dm(obj,'*');
                  obj.push('/');
            }
            else if(infix[i]=='+')
            {
                   pm(obj,'-');
                   obj.push('+');
            }
            else if(infix[i]=='-')
            {
                   pm(obj,'+')
                   obj.push('-');
            
            }   
            
            else if 
            
       
  }      
  
  cout<<"STACK IS : ";
  for(int i=0;i<=top;i++)
  cout<<A[i];
  
  cout<<endl;
  
  cout<<"POSTFIX IS : ";
  for(int i=0;i<k;i++)
  cout<<postfix[i];
  cout<<"\n\n";
  
}

cout<<"INFIX EXPRESSION: ";
puts(infix);
cout<<endl<<endl;
cout<<"POSTFIX EXPRESSION: ";
puts(postfix);
  

cin>>oup;
return 0;
}

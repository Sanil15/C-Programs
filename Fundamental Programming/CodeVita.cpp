#include<iostream>

using namespace std;
void copy(char a[], char b[])
{
     int i=0;
     while(b[i]!='\0')
     {
           a[i]=b[i]; i++;
     }
     a[i]='\0';
}                             



int length(char a[])
{
    int i=0;
    while(a[i]!='\0')
    {  i++;
    }
    return i;
}    

void rotationc(int k,char s[])
{
     int i=1,j;
     char temp;
     int l=length(s);
     while(i<=k)
            {
             temp=s[0];
             for(j=0;j<l-1;j++)
                     {
                      s[j]=s[j+1];
                     }
             s[l-1]=temp;        
             
             i++;   
            }     
     
}



void rotationa(int k,char s[])
{
     int i=1,j;
     char temp;
     int l=length(s);
     while(i<=k)
            {
             temp=s[l-1];
             for(j=l-1;j>0;j--)
                     {
                      s[j]=s[j-1];
                     }
             s[0]=temp;        
             
             i++;   
            }     
     
}






int palindrome(int l,char s[]){
    
    int c=0;
    for(int i=0;i<l/2;i++)
        {
        	if(s[i]==s[l-i-1])
        	c++;
        	else
        	{
        	return -1;
        	break;
        	}
        }
        
        if(c==l/2)
        return 0;
                           }                          
                       

int main()
{
char s[300];
char s2[300];
int arr[100];
int ar=0,sl,sl2;
int t,l,chk=-1,temp=0;
cin>>t;
for(int i=0;i<t;i++)
        {
                    cin>>s; 
                    l=length(s);
                    copy(s2,s);
                    
                    for(int j=0;j<l;j++)
                    {
                             chk=palindrome(l,s);
                             if(chk==0)
                             {
                             sl=j; 
                             temp=1;
                             break;
                             }
                             else
                             {
                             rotationc(1,s);    
                             }
                            
                    }             
                    
                    if(temp==0)
                    {
                    sl=-1;
                    }
        
                    temp=0;        
        
        
        
                     for(int j=0;j<l;j++)
                    {
                             chk=palindrome(l,s2);
                             
                             if(chk==0)
                             {
                             sl2=j; 
                             temp=1;
                             break;
                             }
                             else
                             {
                             rotationa(1,s2);    
                             }
                            
                    }             
                    
                    if(temp==0)
                    {
                    sl2=-1;
                    }
        
                    temp=0;                      
        
        
        if(sl>=0&&sl2<0)
        arr[ar]=sl;
        
        else if(sl<0&&sl2>=0)
        arr[ar]=sl2;
        
        else if(sl>0&&sl2>0)
        {
          if(sl>sl2)
          arr[ar]=sl2;
          
          else
          arr[ar]=sl;   
        }
        
        else if(sl==sl2)
        arr[ar]=sl;
        
        ar++;
        
        
        }



for(int k=0;k<ar;k++)
{        
cout<<arr[k]<<endl;
}

    return 0;
}

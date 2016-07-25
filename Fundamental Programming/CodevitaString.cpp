#include<iostream>


using namespace std;

int length(char a[])
{
    int i=0;
    while(a[i]!='\0')
    {  i++;
    }
    return i;
}    
void copy(char a[], char b[])
{
     int i=0;
     while(b[i]!='\0')
     {
           a[i]=b[i]; i++;
     }
     a[i]='\0';
}                             

int main()
{
int n;
char a[100][400];
char b[400];
int boo[100]={0};
cin>>n;
//fflush(stdin);
int chk=0,temp=0,dis=0;
int i,j,k;
char c;

for(i=0;i<n;i++)
        {
             cin>>a[i];
        }

for(i=0;i<n;i++)
{
         copy(b,a[i]);
         for(k=0;k<length(b);k++)
         {
                 c=b[k];
                 if(boo[k]==0)
                 {
                      for(j=k;j<length(b);j++)
                      {
                            if(c==b[j])
                            {
                                   chk++;
                                   boo[j]=1;
                             }
                      }
                            
                      temp=c;
                      if(temp-96 != chk)
                      {
                              dis++;                
                              break;
                      }                  
                 }       
                 chk=0;
         }      
         chk=0;  
                   
                   if(dis!=0)
                   {
                        cout<<"No"<<endl;                                                        
                   }           
                                   
                   if(dis==0)
                        cout<<"Yes"<<endl;
                        
                         
           for(int l=0;l<100;l++)
               boo[l]=0;     
           
           dis=0;         
                   
                
}


return 0;
    
}

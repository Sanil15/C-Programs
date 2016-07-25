#include<iostream>


using namespace std;
int check(int a[], int n, int g)
{
    int t=1,c=0,gr=0;
    while(t<g)
    {
              c=0;
              for(int i=0;i<n;i++)
              {
                   if(a[i]== t)
                     c++;
               }
               if(c%2==0 && c!=0)
                  gr++; 
               t++;
     }
     return gr;
}                                            
                             

int main()
{
   long int n,a,b;
   int j=1,i,out=0;
   int k[10000]={0};
   
   char t='Q';
   cin>>n;
   while(t =='Q'|| t=='C')
   {
       cin>>t;
       cin>>a>>b;
       if(t=='C')
       {
          if(k[a-1] ==0 && k[b-1]==0)
          {
                     k[a-1]=j;
                     k[b-1]=j;
                     j++;
          } 
          else if(k[a-1] !=0)
               k[b-1]=k[a-1];          
          else if(k[b-1] !=0)
               k[a-1]=k[b-1];
          else
          {
               if(k[a-1]<k[b-1])
               {
                    for(i=0;i<n;i++)
                    {    if(k[i]==k[b-1])
                             k[i]=k[a-1];
                    }                   
               }
               else
               {
                    for(i=0;i<n;i++)
                    {    if(k[i]==k[a-1])
                             k[i]=k[b-1];
                    }
               }     
          }           
       }
       else if(t=='Q')
       {
          out=check(k,n,j);
          cout<<out;    
       }       
   
   }

return 0;
    
}

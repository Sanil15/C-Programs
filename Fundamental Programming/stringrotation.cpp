using namespace std;
#include<iostream>
#include<stdio.h>
int main()
{
    int d,l,i=0,c=0;
    char s[50],temp;
    cout<<"Enter the string"<<endl;
    gets(s);
    l=strlen(s);
    cout<<"Enter the number of clockwise rotations";
    cin>>k;
    while(i<l)
               {
               i++;
               if(s[i]==' ')
               {
                       for(int j=c;j<i/2;j++)
                       {
                       temp=s[j];
                       s[j]=s[i-j-1];
                       s[i-j-1]=temp;        
                       }
                       
               i++;      
               c=i;
               }
               }
    cout<<"string now becomes "<<endl<<s;
    cin>>d;
    return 0;
    }
    
    

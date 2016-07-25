using namespace std;
#include<iostream>
#include<stdio.h>
int main()
{
    int d,l1,l2,l;
    char s1[50],s2[50],temp;
    cout<<"Enter the string"<<endl;
    gets(s1);
    l1=strlen(s1);
    cout<<"Enter the substring"<<endl;
    gets(s2);
    l2=strlen(s2);
    cout<<"Enter the position to enter substring"<<endl;
    cin>>l;
    for(int i=l1-1;i>=l;i--)
            {
            s1[i+l2]=s1[i];                
            }
    for(int j=l,i=0;j<l+l2,i<l2;i++,j++)
            {
            s1[i+l2]=s2[i];                            
            }
    s1[l1+l2]='\0';
    cout<<"New substring is ";
    cout<<s1;
    cin>>d;
    return 0;
    }

using namespace std;
#include<iostream>
#include<stdio.h>
int main()
{
          int a[50],n,b[50];
          int c;
          cout<<"Enter the size of array";
          cin>>n;
          cout<<"Enter the elements of array";
          for(int i=0;i<n;i++)
                  {
                              cin>>a[i];
                  }
          for(int j=0;j<n;j++)
                  {
                              for(int k=j+1;k<n;k++)
                              {
                                      if(a[j]==a[k])
                                      {
                                                    for(int l=k;l<n;l++)
                                                    {
                                                            a[l]=a[l+1];
                                                            
                                                            }
                                                     n--;       
                                                    }
                                                    
                                      }
                              }
          cout<<"New array is";
          for(int i=0;i<n;i++)
                  {
                              cout<<a[i]<<" ";
                  }

          cin>>c;
          return 0;

          
              
                  }

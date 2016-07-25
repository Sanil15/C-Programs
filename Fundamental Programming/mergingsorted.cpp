using namespace std;
#include<iostream>
#include<stdio.h>
int main()
{
          int a[50],n,b[50],m,c[50],d,l=0;
          
          cout<<"Enter the size of array";
          cin>>n;
          cout<<"Enter the elements of array";
          for(int i=0;i<n;i++)
                  {
                              cin>>a[i];
                  }
          cout<<"Enter the size of array";
          cin>>m;
          cout<<"Enter the elements of array";
          for(int i=0;i<m;i++)
                  {
                              
                              cin>>b[i];
                              }
          int t=m+n;
          for(int i=0;i<n;i++)
                  {
                              for(int j=0;j<m;j++)
                          {
                                      
                                      if(a[i]<b[j])
                                      {
                                      c[l]=a[i];             
                                      }
                                      else if(a[i]=b[j])
                                      {
                                      c[l]=a[i];
                                      t--;             
                                      }
                                      else
                                      {
                                      c[l]=b[j];
                                      }
                          l++;
                          }
                    }
          cout<<"New 3rd sorted array is";
          for(int l=0;l<t;l++)
                  {
                              cout<<c[l]<<" ";
                  }

          cin>>d;
          return 0;
                  }

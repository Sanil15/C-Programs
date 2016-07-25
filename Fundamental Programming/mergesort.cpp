using namespace std;
#include<iostream>
int  a[50];
int merge(int,int,int);
int merge_sort(int low,int high)
{
     int mid;
     if(low<high)
     {
     mid=(low+high)/2;
     merge_sort(low,mid);
     merge_sort(mid+1,high);
     merge(low,mid,high);
     }
}
     
int merge(int low,int mid,int high)
     {
     int h,i,j,b[50],k;
     h=low;
     i=low;
     j=mid+1;
     while((h<=mid)&&(j<=high))
            {
                               if(a[h]<=a[j])
                               {
                               b[i]=a[h];
                               h++;
                               }
                               else
                               {
                               b[i]=a[j];
                               j++;
                               }
                               i++;
            }
if(h>mid)
         {
         for(k=h;k<=mid;k++)
                 {
                 b[i]=a[k];
                 i++;           
                 }
         }     
else
{
 for(k=h;k<=mid;k++)
                    {
                    b[i]=a[k];
                    i++;            
                    }               
}
for(k=low;k<=high;k++)
              {
              a[k]=b[k];        
              }
}
int main()
{
int d,num;
cout<<"merge sort program"<<endl;
cout<<"Enter array size";
cin>>num;
cout<<"Enter the array";
for(int i=1;i<=num;i++)
                  {
                  cin>>a[i];       
                  }
merge_sort(0,num);
cout<<"\nSorted array is\n";
for(int i=1;i<=num;i++)
                  {
                  cout<<a[i]<<" ";       
                  }
cin>>d;
return 0;
}

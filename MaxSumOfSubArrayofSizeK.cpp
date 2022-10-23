#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n=4;
    int k=2;
    int arr[]={100, 900, 300, 400};
    int sum=0;
    int j=0;
    int m;


    for (int i = 0; i < n-1; i++)
    {
      
      for (int j = i+1; j < n; j++)
      {
         sum=arr[i]+arr[j];
         m=sum;
         int n=m;
         if(n>m)
         {
            
         }
         
      }
      
    }
    
    cout<<sum;
}
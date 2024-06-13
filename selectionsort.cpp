#include<iostream>
using namespace std;
int main()
{
    int arr[]={9,8,7,6,5,4,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-1;i++)
    {
        int minindex=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[minindex])
            {
                minindex=j;
            }
        }
        swap(arr[minindex],arr[i]);
       // cout<<arr[i];
    }
    for(int k=0;k<n;k++)
    {
     cout<<arr[k]<<" "<<endl;
    }
}
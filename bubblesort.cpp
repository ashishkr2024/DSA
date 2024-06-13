#include<iostream>
using namespace std;

int main()
{
    int arr[]={7,6,2,3,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int k=0;k<n;k++)
    {
        cout<<arr[k]<<endl;
    }
}

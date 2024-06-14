#include<iostream>
using namespace std;

int main()
{
    int arr[]={3,4,5,6,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        bool swapped=false;
        for(int j=0;j<n-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if (swapped=false)
        {
            break;
        }
    }
    for(int k=0;k<n;k++)
    {
        cout<<arr[k]<<endl;
    }
}

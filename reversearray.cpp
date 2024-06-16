#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int start=0;
    int end=sizeof(arr)/sizeof(arr[0])-1;
    while(start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
#include<iostream>
using namespace std;
int main()
{
    int arr[]={7,4,11,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<n;i++)
    {
        int temp=arr[i];
        int j=i-1;
        for( ;j>=0;j--)
        {
            if(arr[j]>temp)
            {
                arr[j+1]=arr[j];
            }
            else 
            {
                break;
            }
        }
        arr[j+1]=temp;

    }
    for(int k=0;k<n;k++)
    {
        cout<<arr[k]<<endl;
    }
}
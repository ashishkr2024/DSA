#include<iostream>
using namespace std;
void selectionsort(int *arr, int size)
{
    if(size==0||size==1)return ;
    int index=0;
    for(int i=1;i<size;i++)
    { 
        if(arr[i]<arr[index])
        {
            index =i;
        }
    }
    swap(arr[0],arr[index]);
    selectionsort(arr+1,size-1);
}
int main()
{
    int arr []={2,6,3,5,1,0,0};
    int size = sizeof(arr)/sizeof(arr[0]);
    selectionsort(arr,size);
    for(int i =0; i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
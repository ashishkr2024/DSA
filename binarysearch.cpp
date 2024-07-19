#include<iostream>
using namespace std;
void print (int *arr,int s,int e)
{
    
   for(int i = s;i<=e;i++)
    {
        cout<<arr[i]<<" ";
        
    }
    cout<<endl;
}
bool binarysearch(int *arr, int s,int e, int k)
{
    print(arr,s,e);
    if(s>e) return 0;
    int mid = s + (e-s)/2;
    cout<<"value of mid is -->"<<arr[mid]<<endl;
    if(arr[mid]==k)return true;
    if(arr[mid]>k)
    return binarysearch(arr, s,mid-1,k);
    else
    return binarysearch(arr,mid+1,e,k);
}
int main()
{
    int arr[]= {2,4,6,10,14,18,22,25,28,30,33,36,222};
    int size =  13;
    int key =  222;
    cout<<" number is present or not -->"<<binarysearch(arr,0, size-1,key);
}

#include<iostream>
using namespace std;
bool binarysearch(int *arr, int s,int e, int k)
{
    if(s>e) return 0;
    int mid = s + (e-s)/2;
    if(arr[mid]==k)return true;
    if(arr[mid]>k)
    return binarysearch(arr, s,mid-1,k);
    else
    return binarysearch(arr,mid+1,e,k);
}
int main()
{
    int arr[]= {1,2,3,4,5,6};
    int size =  6;
    int key =  3;
    cout<<" number is present or not -->"<<binarysearch(arr,0, 5,key);
}

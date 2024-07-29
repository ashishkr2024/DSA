#include<iostream>
//#include<stdlib.h>
using namespace std;
void merge(int *arr, int s,int e)
{
    int mid = (s+e)/2;
    int len1= mid-s+1;
    int len2 = e-mid;
    int* first = new int[len1];
    int* second = new int[len2];
    int  k =s;
    for(int i =0;i<len1;i++)
    {
        first[i]= arr[k];
        k++;
    }
        k=mid+1;
    for(int i=0;i<len2;i++)
    {
        second[i]=arr[k];
        k++;
    }
    int index1=0;
    int index2=0;
         k=s;
    while(index1<len1 && index2<len2)
    {
        if(first[index1]<second[index2])
        {
            arr[k]=first[index1];
            k++;index1++;
        }
        else
        {
            arr[k]=second[index2];
            k++;index2++;
        }
    }
    while(index1<len1)
    {
        arr[k]=first[index1];
        k++;index1++;
    }
     while(index2<len2)
    {
        arr[k]=second[index2];
        k++;index2++;
    }
}
void mergesort(int *arr,int s,int e)
{
 if(s >= e)return;
 int mid = (s+e)/2;
 mergesort(arr,s,mid);
 mergesort(arr,mid+1,e);
 merge(arr,s,e);

}
int main()
{
    int arr[9]={2,3,6,4,1,6,3,4,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    mergesort(arr,0,size-1);
    for(int i=0; i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
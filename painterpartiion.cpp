#include<iostream>
using namespace std;
bool partition(int arr[],int n,int p, int mid)
{
    int painter=1;
    int pagesum=0;
    for(int i=0;i<n;i++)
    {
        if(pagesum+arr[i]<=mid)
         {
          pagesum=pagesum+arr[i];
         }
        else
         {
            painter++;
            if(painter>p||arr[i]>mid)
            return false;
         }
         pagesum=arr[i];
        if(painter>p)
        {
            return false;
        }
    }
    return true;


}
int painter(int arr[],int n,int p)
{
    int start=0;
    int sum=0;
    int ans=-1;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    int end=sum;
    int mid=start+(end-start)/2;
    while(start<=end)
    {
        if(partition(arr,n,p,mid))
        {
            ans=mid;
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int main()
{
    int arr[]={5,5,5,5};
    int n=4;
    int p=2;
    cout<<painter(arr,n,p);
}
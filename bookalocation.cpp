#include<iostream>
using namespace std;
bool isPossible(int arr[],int n,int m,int mid)
{
    int studentcount=1;
    int pagesum=0;
    for(int i=0;i<n;i++)
    {
        if(pagesum+arr[i]<=mid)
        {
            pagesum=pagesum+arr[i];
        }
        else{
            studentcount++;
            if(studentcount>m||arr[i]>mid)
            {
                cout<<"returning faLSE"<<endl;
                return false;

            }
            pagesum=arr[i];
        }
        if(studentcount > m) {
            return false;
        }
    }
    return true;

}
int allocatbook( int arr[],int n, int m)
{
    int start=0;
    int sum=0;
    int ans=-1;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    int end =sum;
    int mid =start+(end-start)/2;
    cout<<"init "<<mid<<endl;
    while(start<end)
    {
     if(isPossible(arr,n,m,mid))
       {  ans=mid;
            end=mid-1;
         }
     else
     {
         start=mid+1;
     }
     mid = start+(end-start)/2;    
    cout<<"ans "<<mid<<endl;
    }
return ans;
}

int main()
{
    int arr[]={10,20,30,40};
    int n=4;
    int m=2;
    cout<<allocatbook(arr,n,m)<<endl;
}
.
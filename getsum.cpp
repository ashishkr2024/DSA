#include<iostream>
using namespace std;
int getsum(int *arr,int size )
{
    
    if(size == 0)return 0;
    int remainingpart =getsum(arr+1,size-1);
    int sum =  arr[0] + remainingpart;
    return sum ;
    
}
int main()
{
    int arr[]={ 1};
    int size = 1;
    int ans = getsum(arr,size);
    cout<<"the sum of array is -->"<<ans;
}
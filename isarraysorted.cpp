#include<iostream>
using namespace std;
bool isarraysorted(int arr[], int size)
{
    if(size == 0 ||size == 1 )return true;
    if(arr[0]>arr[1])
    return false;
    else{
    bool ans =  isarraysorted(arr+1, size-1);
    return ans;
    }
}
int main()
{
    int arr[] = {1,4,6,6,7};
    int size = 5;
   bool ans= isarraysorted(arr,size);
   if(ans)cout<<"array is sorted"<<endl;
   else cout<<"array is not sorted"<<endl;

}
#include<iostream>
using namespace std;
void print(int*arr,int size)
{
    cout<<"size of the array is "<<size<<endl;
    for(int i = 0;i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
bool linearsearch(int *arr,int size,int key)
{
    print(arr,size);
    if(size == 0)return 0;
    if(arr[0] == key)
    return true;
    else{
     bool remainingpart = linearsearch(arr+1, size-1, key);
     return remainingpart;
    }
}
int main()
{
    int arr[] = {1,2,3,5,6};
    int size = 5;
    int key = 10;
    bool ans = linearsearch(arr,size,key);
    if(ans){
        cout<<"key is found"<<endl;
    }
    else 
    cout<<"key is not found"<<endl;
}
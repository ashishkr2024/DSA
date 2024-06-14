#include<iostream>
#include<array>
using namespace std;
int main()
{
    int arr[4]={3,1,2,6};
    array<int,4> a={9,2,5,1};
    int siz=a.size();
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"at index 3"<<a.at(3)<<endl;
    cout<<"size of the array"<<a.size()<<endl;
    cout<<"array is empty or not"<<a.empty()<<endl;
    cout<<"arry first element "<<a.front()<<endl;
    cout<<"array last element"<<a.back()<<endl;
    for(int j=0;j<size;j++)
    {
        cout<<a[j]<<endl;
    }




    
}


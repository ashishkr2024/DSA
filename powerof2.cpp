#include<iostream>
using namespace std;
int power(int n)
{
    if(n==0)return 1;/*
    int smaller = power(n-1);
    int bigger =  2 *smaller;
    return bigger;
    */
    return 2*power(n-1);
}
int main()
{
    int n;
    cout<<"enter  n value"<<endl;
    cin>>n;
    int ans = power(n);
    cout<<"power of 2 is -->"<<ans<<endl;
}
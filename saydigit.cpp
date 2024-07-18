#include<iostream>
using namespace std;
void saydigit(int n, string arr[])
{
    if(n==0)return ;
     int ans = n%10;
   
    n = n/10;
    saydigit(n,arr);
    cout<<arr[ans]<<" "<<endl;
}
int main()
{
     string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    
    int n ;
    cout<< " enter a number "<<endl;
    cin>> n;
    cout<<endl;
    saydigit(n,arr);
}
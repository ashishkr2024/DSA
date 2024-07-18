#include<iostream>
using namespace std;

int fact(int n){
    if(n==1)return 1;
    
       /* int small =  fact(n-1);
        int badi =  n* small;
        return badi;
    */return n* fact(n-1);
}
int main()
{
    int n;
    cout<< " enter a number "<<endl;
    cin>> n;
    int ans= fact(n);
    cout<< "factorial of this number is "<<ans<<endl;
}
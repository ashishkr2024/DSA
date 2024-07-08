#include<iostream>
#include<cmath>
using namespace std;
int bitwise(int dividend,int divisor)
    {
        int n=0;
        while(dividend >= (divisor<<(n+1)))
        {
            n++;
        }
        return n ;
    }
int main()
{
    int dividend ,divisor;
    cout<<"enter dividened & divisor "<<endl;
    cin>>dividend>>divisor;
    
    int sum= 0;
    int n=0;
       while(dividend>divisor)
       {
        n = bitwise(dividend, divisor);
        sum +=1<<n;
        dividend = dividend - divisor<<n;
       }
       cout<< sum<<endl;
     
}
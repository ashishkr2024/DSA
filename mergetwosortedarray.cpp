#include<iostream>
using namespace std;
void merge(int num1[],int n,int num2[],int m)
{
    int i=n-1;
    int j=m-1;
    int k=m+n-1;
    while ( i >= 0 && j >= 0)
    {
        if(num1[i]>num2[j])
        {
            num1[k]=num1[i];
            i--;
        }
        else{
            num1[k]=num2[j];
            j--;
        }
        k--;
    }
    while(j >= 0 )
    {
        num1[k]=num2[j];
        j--;k--;
    }

}

int main()
{
    int num1[8]={5,6,7,8,0,0,0};
    int num2[3]={1,4,6};
    int n =4;
    int m=3;
    merge(num1,n,num2,m);
    for(int i=0; i<n+m;i++)
    {
        cout<<num1[i];
    }
}
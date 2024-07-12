#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int n = 5;
    int * ptr = (int*)malloc(n*sizeof(int));
    for(int i = 0; i < n; i++)
    {
        ptr[i] = i*2;
    }
    for(int i = 0 ; i < n; i++  )
    {
        cout<<ptr[i]<<endl;
    }
    free(ptr);
    cout<<"calloc function"<<endl;
    int * ptr1 = (int*)calloc(n,sizeof(int));
    for(int j = 0; j < n ; j++)
    {
        ptr1[j];
    }
    for(int j = 0; j<n ; j++)
    {
        cout<<ptr1[j]<<endl;
    }
    free(ptr1);
    return 0;
}
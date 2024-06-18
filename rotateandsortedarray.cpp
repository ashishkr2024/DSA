#include<iostream>
#include<vector>
using namespace std;
 int count=0;
bool isSorted(vector<int> &v)
{  
    int n=v.size();
    for( int i=1; i<n; i++ )
    {   
        if( v[i-1] > v[i] )
        count++;
    }
    if ( v[n-1] > v[0])
    {
        count++;
    }
    if(count<=1)
    {
        return 1;
    }
    else 
    return 0;
}
int main()
{
    vector<int> v;
    v.push_back(3);
    v.push_back(2);
    v.push_back(5);
    v.push_back(1);
    v.push_back(6);
    isSorted(v);
   if(count<=1)
   {
    cout<<"array is sorted and rotated"<<endl;
   }
   else
   cout<<"array is not sorted"<<endl;
   for(int i:v)
   {
    cout<<i<<" ";
   }
}
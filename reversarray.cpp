#include<iostream>
#include<vector>
using namespace std;
vector<int> reverse(vector<int> v,int n)
{
    int start=n+1;
    int end=v.size()-1;
    while(start<end)
    {
        swap(v[start],v[end]);
        start++;
        end--;
    }
    return v;
}
void print(vector<int> v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}
int main()
{
    vector<int> v;
    int n=2;
    v.push_back(11);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(8);
    
   vector<int> ans=reverse(v,n);
   cout<<"before reverse"<<endl;
   for(int i:v)
   {
    cout<<i<<" ";
   }
   cout<<endl;
 print(ans);
}
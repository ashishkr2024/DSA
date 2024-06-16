#include<iostream>
#include<vector>
using namespace std;
vector<int> reverse(vector<int> v)
{
    int start=0;
    int end=v.size()-1;
    while(start<end)
    {
        swap(v[start],v[end]);
        start++;
        end--;
    }
    return v;
}
 void print(vector<int> p)
    {
        for(int i=0;i<p.size();i++)
        {
            cout<<p[i]<<" ";
        }
        cout<<endl;
    }
int main()
{
    vector<int> v;
    v.push_back(11);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(8);
   vector<int> ans=reverse(v);
   cout<<endl;
   cout<<"printing reverse aray"<<endl;
   print(ans);
}
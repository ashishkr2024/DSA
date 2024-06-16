#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(2);
    v.push_back(1);
    v.push_back(7);
    v.push_back(3);
    v.push_back(6);
     for (int i:v)
    {
        cout<<i<<endl;
    }
    sort(v.begin(),v.end());
    for (int a:v)
    {
        cout<<a<<endl;
    }
    cout<<"finding 5-->"<<binary_search(v.begin(),v.end(),5)<<endl;
    cout<<"lower bound-->"<<lower_bound(v.begin(),v.end(),4)-v.begin()<<endl;
    cout<<"uper bound-->"<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    int a=5;
    int b=6;
    int c=2;
    cout<<"max-->"<<max(a,b)<<endl;
    cout<<"min-->"<<min(a,b)<<endl;
    swap(a,b);
    cout<<"a-->"<<a<<endl;
    string abcd="abcdef";
    reverse(abcd.begin(),abcd.end());
    cout<<"reverse of abcd value is -->"<<abcd<<endl;
    rotate(v.begin(),v.begin()+1,v.end());
    cout<<"after rotate "<<endl;
    for(int k:v)
    cout<<k<<" ";

}
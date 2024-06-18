#include<iostream>
#include<vector>
using namespace std;

void rotate(vector<int> &v,int k)
{
    vector<int> temp(v.size());
    int i=0;
    for(;i<v.size();i++)
    {
        temp[(i+k)%v.size()]=v[i];

    }
    v=temp;
}
int main()
{
    vector<int> v;
    int k=3;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    rotate(v,k);
    for(int i:v)
    {
        cout<<i<<" ";
    }

}
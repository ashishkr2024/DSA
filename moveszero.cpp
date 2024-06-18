#include<iostream>
#include<vector>
using namespace std;
void mergezero(vector<int> &v)
{
    int i=0;
    for(int j=0;j<v.size();j++)
    {
        if(v[j]!=0)
        {
            swap(v[i],v[j]);
            i++;
       }
       
    }
}
int main()
{
    vector<int> v;
    v.push_back(0);
    v.push_back(2);
    v.push_back(5);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(8);
    v.push_back(6);
    mergezero(v);
    for(int i:v){
        cout<<i<<" ";
    }

}
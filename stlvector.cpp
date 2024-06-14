#include<iostream>
#include<vector>
using namespace std;
int main()
{
     vector<int> v;
    vector<int> a(5,1);
    
    cout<<"capacity--> "<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"capacity--> "<<v.capacity()<<endl;
    v.push_back(4);
    cout<<"capacity--> "<<v.capacity()<<endl;
    v.push_back(5);
    cout<<"capacity--> "<<v.capacity()<<endl;
    cout<<"size--> "<<v.size()<<endl;
    cout<<"array first element--> "<<v.front()<<endl;
    cout<<"array last element --> "<<v.back()<<endl;
    cout<<"array second element --> "<<v.at(2)<<endl;
        v.push_back(8);
    int size=v.size();
    for(int i=0;i<size;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl<<"copy of array v value to  last array "<<endl;
    vector<int> last(v);
    int siz=last.size();
     for(int j=0;j<siz;j++)
    {
        cout<<last[j]<<" ";
    }
    cout<<endl<<"pop the vlaue from array v "<<endl;

    v.pop_back();
    v.pop_back();
    int s=v.size();
    for(int p=0;p<s;p++)
    {
        cout<<v[p]<<" ";
    }
}

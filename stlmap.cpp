#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,string> m;
    m[1]="ashish";
    m[5]={"best"};
    m[2]={"is"};
    m[3]={"the"};
    m.insert({6,"and"});
    m.insert({7,"great"});
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<"finding 7-->"<<m.count(7);
    m.erase(6);
    cout<<"after erase"<<endl;
    for(auto j:m)
    {
        cout<<j.first<<" "<<j.second<<endl;
    }
    auto it=m.find(5);
    for(auto k=it;k!=m.end();k++)
    {
        cout<<(*k).first<<" "<<(*k).second<<endl;
    }

}
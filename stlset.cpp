#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> s;
    s.insert(5);
    s.insert(2);
    s.insert(7);
    s.insert(6);
    s.insert(4);
    s.insert(3);
    cout<<"size of set-->"<<s.size()<<endl;
    cout<<"set is empty or not -->"<<s.empty()<<endl;
    int size=s.size();
    for(int i:s)
    {
        cout<<i<<" ";
    }
    s.erase(s.begin());
    int siz=s.size();
    for(int i:s)
    {
        cout<<endl<<i<<" ";
    }
    cout<<endl<<"4 is present or not"<<s.count(4)<<endl;
    s.end();
    s.find(4);

    set<int>::iterator it=s.begin();
    it++;
    s.erase(it);
    for (int j:s){
        cout<<j<<endl;
    }
  //  s.erase(s.begin(),s.end());
    s.erase(s.begin(),s.find(6));
    cout<<endl<<"size of the set is-->"<<s.size();
    cout<<endl<<"max size is "<<s.max_size();

}
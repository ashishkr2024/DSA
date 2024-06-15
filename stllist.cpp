#include<iostream>
#include<list>
using  namespace std;
int main()
{
    list<int> l(5);
    l.push_back(5);
    l.push_front(1);
    l.push_front(2);

    for(int i:l)
    {
        cout<<i<<" ";
    }
    cout<<endl<<"size of the list-->"<<l.size();
    cout<<endl<<"after erase of the list-->";
    l.erase(l.begin());
    list<int> n(l);
    for(int i:n)
    {
        cout<<i;
    }
    cout<<endl<<"size of the list-->"<<l.size();
    cout<<endl<<"after erase of the list-->"<<endl;
    l.erase(l.begin());
    list<int> p(l);
    for(int i:p)
    {
        cout<<i;
    }
    for(int i:l)
    {
        cout<<"final print of the list  "<<i<<endl;
    }
    
    cout<<"first element is "<<l.front()<<endl;
    cout<<"last element is "<<l.back()<<endl;
    
}
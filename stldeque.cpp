#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int> d;
    d.push_back(2);
    d.push_front(1);
    d.push_back(3);
    d.push_back(4);
    d.push_back(5);
    d.push_back(6);
    cout<<"first index element is "<<d.at(1)<<endl;
    cout<<"first element is "<<d.front()<<endl;
    cout<<"last element is "<<d.back()<<endl;
    cout<<"size of the doble ended queue is "<<d.size()<<endl;
    int size=d.size();
    for(int i=0;i<size;i++)
    {
        cout<<d[i]<<" ";
    }
    cout<<endl;
    d.erase(d.begin(),d.begin()+2);
    int siz=d.size();
    for(int k=0;k<size;k++)
    {
        cout<<d[k]<<" ";
    }
d.push_front(2);
d.push_back(7);
cout<<endl;
int size1=d.size();
    for(int i=0;i<size1;i++)
    {
        cout<<d[i]<<" ";
    }

}
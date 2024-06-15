#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int> maxi;
    // it is work like max heap. it always gives max value of the queue
    maxi.push(1);
    maxi.push(6);
    maxi.push(3);
    maxi.push(2);
    maxi.push(4);
    maxi.push(5);
    cout<<"size of priority queue is -->"<<maxi.size()<<endl;
    cout<<"queue is empty o not -->"<<maxi.empty()<<endl;
    int size=maxi.size();
    for ( int i=0;i<size;i++)
    {
        cout<<maxi.top()<<endl;
        maxi.pop();
    }
    priority_queue<int, vector<int>, greater<int> >mini;
    mini.push(6);
    mini.push(1);
    mini.push(5);
    mini.push(3);
    mini.push(2);
    mini.push(4);
    cout<<"size of mini queue is -->"<<mini.size()<<endl;
    cout<<"queue is empty o not -->"<<mini.empty()<<endl;
    int siz=mini.size();
    for (int j=0;j<siz;j++)
    {
        cout<<mini.top();
        mini.pop();

    }
    cout<<endl<<"maxi queue is empty o not -->"<<maxi.empty()<<endl;
    cout<<" mini queue is empty o not -->"<<mini.empty()<<endl;



}
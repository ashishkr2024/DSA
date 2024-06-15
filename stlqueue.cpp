#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<string> q;
    q.push("ashish");
    q.push("kumar");
    q.push("singh");
    cout<<"queue top element -->"<<q.front()<<endl;
    cout<<"size of the queue -->"<<q.size()<<endl;
    q.pop();
    cout<<"queue size after pop-->"<<q.size()<<endl;
    cout<<"last element of queue"<<q.back()<<endl;
    cout<<"queue is empty or not-->"<<q.empty()<<endl;
    
}
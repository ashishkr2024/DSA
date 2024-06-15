#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<string> s;
    s.push("ashish");
    s.push("kumar");
    s.push("singh");
    cout<<"top element--> "<<s.top()<<endl;
    cout<<"size of the stack-->"<<s.size()<<endl;
    cout<<"stack is empty or not "<<s.empty()<<endl;
    s.pop();
    cout<<"after pop top element of stack--> "<<s.top()<<endl;
}
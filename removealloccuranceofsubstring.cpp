#include<iostream>
#include<string>
using namespace std;
string removesubstring(string s, string part)
{
    while(s.length() !=0 && s.find(part)<s.length())
    {
        s.erase(s.find(part),part.length());
    }
    return s;
}
int main()
{
    string s("daabcbaabcbc");
    string part("abc");
    cout<<"after removing all occurance of substring the output is -->"<<endl<<removesubstring(s,part);
}
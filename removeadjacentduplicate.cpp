#include<iostream>
#include<string>
using namespace std;
string removeduplicate(string s)
{
    int i=0;
    while(i<s.length()-1)
    {
        if(s[i]==s[i+1])
        {
    
            s.erase(i,2);
           
            i=0;
        }
        else 
        i++;
    }
    return s;
}
int main()
{
    string s("pappkqqap");
    cout<<s<<endl;
    cout<<" after remove adjacent duplicate output id --> "<<removeduplicate(s);
}
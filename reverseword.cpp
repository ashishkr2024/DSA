#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string reverse(string s)
{
    int start = 0;
    int end = s.length()-1;
    while( start < end)
    {
        swap(s[start],s[end]);
        start++;
        end--;
    }
    return s;

}
string word(string s)
{
    int start  = 0;
    int end = s.length();
    string ans;
    string temp;
    while(start <= end)
    {
        
        if( start<end &&s[start] != ' ')
         {
                
            temp.push_back((s[start]));
           
         }
         else
         {  if(!temp.empty())
            {
             ans = ans+ reverse(temp);
             temp.clear();
            
             if(start<end)
             {
                ans = ans + ' ';
             }
            }
            
         }
         start++;
    }
    return ans;
}
int main()
{
    string s="my name is golu";
    cout<<"reverse of the each word of the  string is"<<word(s);
}
#include<iostream>
#include<string>
using namespace std;

bool valid(char ch)
{
    if((ch >= 'a' && ch <= 'z' )||(ch >= 'A' && ch <= 'z')||(ch >= '0' && ch <= '9'))
    {
        return true;
    }
    else
    return false;
}
char tolowercase(char ch)
{
    if((ch >= 'a' && ch <= 'z' )||(ch >= '0' && ch <= '9' ))
    {
        return ch;
    }
    else{
        char temp = ch-'A'+'a';
        return temp;
    }
}

bool checkpalindrom(string a)
{
    int s = 0;
    int e = a.length()-1;
    while ( s <= e)
    {
        if(a[s] != a[e])
        { 
            return 0;
            
        }
        else
        {
         s++;
         e--;
        }
        
    }
    
    return true;
}
bool ispalindrom(string s)
{
    string temp = "";
    // faltu character hatao
    for(int i=0; i<s.length(); i++)
    {
        if(valid (s[i]))
        temp.push_back(s[i]);
    }
    
    //lower case me kardo
    for(int i=0;i<temp.size();i++)
    {
        temp[i]=tolowercase(temp[i]);
    }
    
  
     return checkpalindrom(temp);
    
}
int main()
{
    string s = " a?s?h,.i.ss.,.,.,i./;hsa";
    //string p("aAaA");
    cout<<" this string is palindrom or not -->"<<(ispalindrom(s)? "yes" :"no");
   // cout<<" aaaa is palindrom or not-->"<<checkpalindrom( p);
}

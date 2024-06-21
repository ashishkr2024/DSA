#include<iostream>
#include<string>
using namespace std;
char getmaxoccchar( string s)
{
    int arr[26]={0};
    for(int i=0;i<s.length();i++)    
    {
        char ch = s[i];
        int number = 0;
        if(ch >= 'a' && ch <= 'z' )
        {
            number = ch -'a';
        }
        else{
            number = ch -'A';

        }
        arr[number]++;

    }
    int maxi = -1; int ans=0;
    for(int j=0; j<26; j++)
    { if( maxi < arr[j] )
        {
            maxi=arr[j];
            ans=j;
        }

    }
    return ans + 'a';

}
int main()
{
    string s ;
    cout<<"enter your string"<<endl;
    cin>>s;
    cout<<"maximum occuring character is -->"<<getmaxoccchar(s);
}
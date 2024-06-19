#include<iostream>
#include<vector>
using namespace std;
vector<int> reverse(vector<int> &ans)
{
    int start = 0;
    int end = ans.size()-1;
    while(start <= end)
    {
        swap(ans[start],ans[end]);
        start++;
        end--;
    }
    return ans;
}
vector <int> sumoftwoarray(vector<int>v,vector<int> a)
{
    int i=v.size()-1;
    int j=a.size()-1;
    int carry = 0;
    vector<int> ans;
    int sum=0;
    while( i >= 0 & j >= 0)
    {
        int sum = v[i] +a[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
        j--;
    }
    while( i >= 0)
    {
         int sum = v[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
    }
     while( j >= 0)
    {
        int sum = v[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        j--;
    }
     while( carry != 0)
    {
        int sum = carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
    
    }
    return ans;
}
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    vector<int> a;
    a.push_back(9);
   // a.push_back(5);
    //a.push_back(6);
    vector<int> ans;
    ans = sumoftwoarray(v,a);
  reverse(ans);
  for(int i:ans)
  {
    cout<<i<<" ";
  }
}
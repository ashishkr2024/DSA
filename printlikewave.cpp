#include<iostream>
#include<vector>
using namespace std;
vector<int> printwave(int a[][4], int rows,int column)
{
    vector <int> ans;
    for(int col =0; col<column; col++)
    {
        if(col&1)
        {
            for(int row=rows-1; row>= 0; row--)
            {
                ans.push_back(a[row][col]);
            }
        }
        else
        {
            for(int row =0; row< rows; row++)
            {
                ans.push_back(a[row][col]);
            }
        }
    }
    return ans;
}
int main()
{
    int a[3][4]={{1,2,3,4},{5,6,7,8},{15,10,11,12}};
    int rows = 3;
    int column = 4; 
    //print row wise
    /*  for( int row =0; row<3;row++){
        for(int col = 0; col<4; col++){
            cout<<a[row][col]<<"  ";

        }
        cout<<endl;
    }*/
    vector<int> result = printwave(a,rows,column);
    for(int n:result)
    {
        cout<<n<<" ";
    }
    cout<<endl;
}
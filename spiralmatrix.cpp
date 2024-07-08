#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<vector<int>> matrix ={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int row = matrix.size();
    int col = matrix[0].size();
    // cout<<row<<endl;
    //cout<<col<<endl;
    for(int i = 0;i<row;i++)
    {
        for(int j = 0;j<col;j++)
        {
            cout<<matrix[i][j];
        }
    }

    int count = 0;
    int total = row*col;
    int startingrow = 0;
    int startingcol = 0;
    int endingrow = row-1;
    int endingcol = col -1;
    vector<int> ans;
    //print starting row
    while(count<total)
    {
        //print starting row
        for(int index = startingrow; count < total && index <= endingcol; index++)
        {
            ans.push_back(matrix[startingrow][index]);
            count++;
        }
        startingrow++;
        //print ending column
        for(int index = startingrow; count<total && index <= endingrow; index++)
        {
            ans.push_back(matrix[index][endingcol]);
            count++;
        }
        endingcol--;
        //print ending row
        for(int index = endingcol; count<total && index >= startingcol; index--)
        {
            ans.push_back(matrix[endingrow][index]);
            count++;
        }
        endingrow--;
        //print starting column
        for(int index = endingrow;count<total &&  index >= startingrow; index--)
        {
            ans.push_back(matrix[index][startingcol]);
            count++;
        }
        startingcol++;

    }
    for(int i:ans)
    cout<< i<<" " ;
}
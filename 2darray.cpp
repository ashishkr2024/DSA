#include<iostream>
#include<climits>
using namespace std;
bool ispresent(int arr[][4],int target)
{
    for(int row = 0; row<3;row++)
    {
        for(int col =0; col<4;col++)
        {
            if(arr[row][col]==target)
            {
                return 1;
            }
        }
    }
    return 0;
}
void rowwisesum(int arr[][4],int row, int col)
{
  
     for( int i =0; i<row;i++){
         int sum =0;
        for(int j = 0; j<col; j++){
            sum = sum + arr[i][j];

        }
        cout<<sum<<" ";
     
        cout<<endl;
    }
      
}
void colwisesum(int arr[][4],int row, int col)
{
    for(int j=0;j<col;j++){
        int sum = 0;
        for(int i=0;i<row;i++)
        {
            sum=sum +  arr[i][j];
        }
        cout<<sum<<"  ";
        cout<<endl;
    }
}
int largestrowsum(int arr[][4],int row,int col)
{
    int rowindex=-1;
    int maxi= INT_MIN;
      for( int i =0; i<row;i++){
         int sum =0;
        for(int j = 0; j<col; j++){
            sum = sum + arr[i][j];

        }
        if(sum>maxi)
        {
            maxi = sum;
            rowindex = i;
        }
     }
     cout<<"the maximum sum is -->"<<maxi<<endl;
     return rowindex;
}
int main()
{
    int arr[3][4];
    for ( int row=0 ;row<3;row++){
        for(int j = 0 ; j<4; j++){
            cin>>arr[row][j];
        }
    }
    // row wise print 
    for( int row =0; row<3;row++){
        for(int col = 0; col<4; col++){
            cout<<arr[row][col]<<"  ";

        }
        cout<<endl;
    }
    //column wise print
   for( int col =0; col<4;col++){
        for(int row = 0; row<3; row++){
            cout<<arr[row][col]<<"  ";

        }
        cout<<endl;
    }
    //find number present in array or not
    cout<<"enter  a number"<<endl;
    int target ;
    cin>> target;
    if(ispresent(arr,target))
    {
        cout<<"element found"<<endl;
    }
    else
    cout<<"element not found"<<endl;

//row wise sum
rowwisesum(arr,3,4);
//column wise sum
colwisesum(arr,3,4);
//largest row sum at which index
int index = largestrowsum(arr,3,4);
cout<<"max row is at index-->"<<index;

}
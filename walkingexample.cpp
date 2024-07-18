#include<iostream>
using namespace std;
void walking ( int s, int d )
{
    cout<<"source "<<s<<" Destination"<<d<<endl;
    if(s == d){
        cout<<"pahuch gye"<<endl;
        return;
    }
    s++;
    walking(s,d);
}
int main()
{
    int source = 1;
    int destination = 10;
    walking(source,destination);
}
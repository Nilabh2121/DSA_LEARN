#include<iostream>
using namespace std;
int power(int m,int n)
{
    if(n==0)
        return 1;
    return power(m,n-1)*m;
}
int main(){
    int r;
    int x,y;
    cout<<"Enter the no : ";
    cin>>x>>y;
    r= power(x,y);
    cout<<r<<endl;
    return 0;
    
}
#include<iostream>
using namespace std;
double e(int x, int n)
{
    static double p=1, f=1;
    double r;
    if(n==0)
        return 1;
    else 
    {
        r=e(x,n-1);
        p=p*x;
        f=f*n;
        return r+p/f;
    }
}
int main()
{
    double r;
    double x,y;
    cout<<"Enter the no : ";
    cin>>x>>y;
    r=e(x,y);
    cout<<r<<endl;
    return 0;
}
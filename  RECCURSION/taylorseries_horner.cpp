#include<iostream>
using namespace std;
double e(int x , int n)
{
    static double s;
    if(n==0)
    
        return s;
    s=1+x*s/n;
    return e(x,n-1);
}
int main(){
    double x,y;
    cout<<"Enter the no : ";
    cin>>x>>y;
    cout<<e(x,y)<<endl;
    return 0;

}

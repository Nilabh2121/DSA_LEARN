#include <iostream>
using namespace std;
//iterative function
int fib(int n){
    int t0=0,t1=1, sum=0,i;
    if(n<=1) return n;
    for(i=2;i<=n ;i++){
        sum=t0+t1;
        t0=t1;
        t1=sum;
    }
    return sum;
}
//recursive function
int fibr(int n){
    if(n<=1)//base condition
        return n;
    return fibr(n-2)+fibr(n-1);//RR
}
int main(){
    int r;
    cin>>r;
    int ans= fibr(r);
    cout<<ans<<endl;
}

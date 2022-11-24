#include<iostream>
using namespace std;
//for factorial
int fact(int n){
    if(n==0)return 1;
    return fact(n-1)*n;
}
//iterative
int Comb(int n, int r){
    int t1,t2,t3;
    t1=fact(n);
    t2=fact(r);
    t3=fact(n-r);
    return t1/(t2*t3);

}
//recursive
int nCr(int n, int r){
    int num , deno ;
    num=fact(n);
    deno=fact(r)*fact(n-r);
    return num/deno;
}
//main function
int main(){
    int n,r;
    cout<<"Enter n :  "<<endl;
    cin>>n;
    cout<<"Enter r :  "<<endl;
    cin>>r;

    cout<<"THE COMBINATION IS : " <<nCr(n,r)<<endl;
}
#include<iostream>
using namespace std;
int main(){
    int n , r,m, sum=0;
    cout<<"Enter n : ";
    cin>>n;
    m=n;
    while(n>0){
        r=n%10;
        n=n/10;
        sum=sum+r*r*r;

    }
    if(sum==m){
        cout<<"Armstrong"<<endl;
    }
        else 
            cout<<"Not armstrong"<<endl;
            return 0;
}
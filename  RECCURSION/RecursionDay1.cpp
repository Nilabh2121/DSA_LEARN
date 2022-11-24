#include<iostream>
using namespace std;

int factorial(int n){

    //Base condition 
    if(n==0){
        return true;
    }

    int Smallerprob=factorial(n-1);
    int Bgprob= n*Smallerprob;
    return Bgprob;
}

int main(){

    int n;
    cout<<"Enter N"<<endl;
    cin>>n;
    

    int ans=factorial(n);
    cout<<ans<<endl;
    return 0;
}
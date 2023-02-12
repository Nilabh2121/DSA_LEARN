#include<iostream>
using namespace std;

int SayDigit(int n , string arr[]){
    //Base condition 
    if(n==0){
        return 1;
    }

    /// processing 
    int digit=n%10;
    n=n/10;

    //RR
     SayDigit(n,arr);
     cout<<arr[digit]<<endl;
}


int main(){

  string arr[10]={"zero","one","two","three","Four",
  "Five","Six","Seven","Eight","Nine"};
  int n;
  cin>>n;
  cout<<endl<< endl<<endl;
  SayDigit(n,arr);
  cout<<endl<< endl<<endl;

  }
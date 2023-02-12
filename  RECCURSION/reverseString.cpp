#include<iostream>
using namespace std;

int resverseString(string& str, int i , int j ){
    //base case 
    if(i>j){
        return -1;
    }

    swap(str[i],str[j]);
    i++;
    j--;
    resverseString(str,i,j);
}





int main(){
    string name="nilabh";
    resverseString(name,0,name.length()-1);
    cout<<name<<endl;


}
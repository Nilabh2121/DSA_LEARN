#include <iostream>
using namespace std;
int main(){
    float Basicsl;
    float allowencessl;
    float deductionsl;
    float netsalary;
    cout<<"Enter Basic salary : ";
    cin>>Basicsl;
    cout<<"Enter  percent of Allowences  : ";
    cin>>allowencessl;
    cout<<"Enter percent of Deductions  : ";
    cin>>deductionsl;
    netsalary=Basicsl+(Basicsl*allowencessl)/100-(Basicsl*deductionsl)/100;
    cout<<"NET SALARY IS: "<<netsalary<<endl;
    return 0;
    
    }
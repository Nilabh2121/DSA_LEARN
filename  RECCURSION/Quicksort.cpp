#include <iostream> 
#include<bits/stdc++.h>
using namespace std;
int partition(vector<int>& arr, int s , int e){
    int pivot=arr[s];
    int count=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            count++;
        }
    }
    int pivotindex=s+count;
    swap(arr[pivotindex],arr[s]);
    
    //left and right part samhalte hai
    
    int i=s , j=e;
    while(i<pivotindex && j>pivotindex){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<pivotindex && j>pivotindex){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotindex;
}
void solve(vector<int>& arr,int s , int e){
    //base case 
    if(s>=e){
        return;
    }
    //paartion
    int p= partition(arr,s,e);
    //left part sort krenge 
    solve(arr,s,p-1);
   //right part sort karenge
    solve(arr,p+1,e);
}
vector<int> quickSort(vector<int> arr)
{
    solve(arr,0,arr.size()-1);
    return arr;
}

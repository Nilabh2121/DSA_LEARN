#include<bits/stdc++.h>
#include<iostream>
using namespace std;

bool ispossible(vector<int>&boards,int k ,int mid){
    int painter=1;
    int boardscount=0;
    for(int i=0;i<boards.size();i++){
        if(mid>=boards[i]+boardscount){
            boardscount+=boards[i];
        }
        else{
            painter++;
            if(painter>k||boards[i]>mid){
                return false;
            }
            boardscount=boards[i];
        }
    }
    return true;
}

int findLargestMinDistance(int boards, int k)
{
     int start=0;
     int sum=0;
    for(int i=0;i<boards.size();i++){
       sum+=boards[i];
   }
   int end=sum;
   int ans=-1;
   int mid=start+(end-start)/2;
   while(start<=end){
       if(ispossible(boards,k,mid)){
           ans=mid;
           end=mid-1;    
       }
       else{
           start=mid+1;
       }
       mid=start+(end-start)/2;
   }
   return ans;
}
   

#include<iostream>
using namespace std;

struct Array {
    int A[20];
    int length;
    int size;
};

void Display(struct Array arr){
    int i;
    cout<<"Elements are"<<","<<endl;
    for(i=0;i<arr.length;i++){
        cout<<arr.A[i];
    }
}
int BinarySearch(struct Array arr, int key){
    int Start=0;
    int end=arr.length-1;
    int mid=Start+(end-Start)/2;
    while(Start<=end)
    { 
        if(key==arr.A[mid])
            return mid;
        else if(key>arr.A[mid])
            Start=mid+1;
        else if(key<arr.A[mid]){
             end=mid-1;
        }
    }
    return -1;
}

int main()
{
    struct Array arr={{2,3,4,5,6},20,5};
    printf("%d\n",BinarySearch(arr,5));
    Display(arr);
    return 0;
}
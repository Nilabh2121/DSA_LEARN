#include<iostream>
using namespace std;
struct Array{
    int A[20];
    int size;
    int length;
};
void Display(struct Array arr){
    int i;
    cout<<"Elements are "<<endl;
    for(i=0;i<arr.length;i++)
    cout<< arr.A[i]<<",";
}

void arrayinsert(struct Array *arr, int index , int x )
{
    int i;
    if(index>=0 && index<= arr->length)
    {
        for(i=arr->length;i>index;i--){
            arr->A[i]=arr->A[i-1];
        }
        arr->A[index]=x;
        arr->length++;
    }
    
}

int main()
{
    struct Array arr={{2,3,4,5,6},20,5};
    arrayinsert(&arr,5,10);
    Display(arr);
}
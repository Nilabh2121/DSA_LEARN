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

void arraydelete(struct Array *arr, int index)
{
    int i;
    int x=0;
    if(index>=0 && index<= arr->length)
    {
        x=arr->A[index];
        for(i=index;i<arr->length-1;i++){
            arr->A[i]=arr->A[i+1];
        }
        arr->length--;
    }
    
}

int main()
{
    struct Array arr={{2,3,4,5,6},20,5};
    arraydelete(&arr,2);
    Display(arr);
    return 0;
}
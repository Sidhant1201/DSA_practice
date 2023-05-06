#include<bits/stdc++.h>
using namespace std;

void print(int *arr, int size){
    for(int i =0; i< size;i++){
        cout<<arr[i]<<" ";
    }
    return;
}

void merge(int* arr, int s, int e){
    int mid= s+ (e-s)/2;

    int *first = new int[mid-s+1];
    int *second = new int[e-mid];

    int k = s;
    for(int i = 0; i<mid-s+1; i++){
        first[i] = arr[k++];
    }

    k = mid+1;
    for(int i =0; i<e- mid; i++){
        second[i]= arr[k++];
    }

    int index1 = 0;
    int index2 = 0;
    k= s;
    while(index1<mid-s+1 && index2<e- mid){
        if(first[index1]< second[index2]){
            arr[k++] = first[index1];
            index1++;
        }
        else{
            arr[k++] = second[index2];
            index2++;
        }
    }
    while(index1<mid-s+1){
        arr[k++] = first[index1++];
    }
    while(index2<e- mid){
        arr[k++] = second[index2++];
    }

}

void mergeSort(int *arr, int s, int e){
    if(s>= e) return;

    int mid = s + (e-s)/2;

    mergeSort(arr, s, mid);
    mergeSort(arr, mid+1, e);

    merge(arr, s, e);

}


int main(){
   int arr[] = {8, 3, 2, 9};
   mergeSort(arr, 0, 4-1);
   print(arr, 4);
   
}

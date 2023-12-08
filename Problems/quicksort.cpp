int partition(int arr[], int low, int high){
    int pivot = arr[high];
    int ind = low-1;

    for(int j = low; j<= high; j++){
        if(arr[j]< pivot){
            ind++;
            swap(arr[j], arr[ind]);
        }
    }
    swap(arr[ind+ 1], arr[high]);
    return (ind+1);

}

void quickSort(int arr[], int low, int high){
    if(low< high){
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi-1);
        quickSort(arr, pi+1, high);
    }


}



int main(){
   int arr[] = {8,3, 2,9};
   quickSort(arr, 0, 3);
   print(arr,4);
   
}
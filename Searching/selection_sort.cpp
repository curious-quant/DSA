#include<iostream>

using namespace std;

int printArray(int arr[],int n){

    for(int i=0; i<n; i++){
        cout<<arr[i]<< " ";
    }
    cout << endl;
}
int selection_sort(int arr[], int n){

    for(int i=0; i< n-1; i++){

        int minIndex = i;

        for(int j = i+1; j<n; j++){

            if(arr[j] < arr[minIndex]){
                 minIndex = j;
            }
        }
            
            swap(arr[minIndex], arr[i]);
        

    }
}

int main(){

    int arr[8] = {43,8,4,14,67,23, 39, 55};

    selection_sort(arr,8);

    cout << "sorted array: " <<  endl;

    printArray(arr,8);
       
}

#include<iostream>

using namespace std;

int printArray(int arr[],int n){

    for(int i=0; i<n; i++){
        cout<<arr[i]<< " ";
    }
    cout << endl;
}


int bubble_sort(int arr[], int n){

// for round 1 to n-1
    for(int i=1; i <n; i++){ 
        bool swapped = false;

        // process element till n-i th index
        for(int j=0; j < n-i; j++){
            if(arr[j]> arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false){
            // still swapped == false means already sorted
            break;
        }
    }
}



int main(){

    int arr[8] = {43,8,4,14,67,23, 39, 55};

    bubble_sort(arr,8);

    cout << "sorted array: " <<  endl;

    printArray(arr,8);
       
}
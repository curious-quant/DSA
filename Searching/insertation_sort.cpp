#include<iostream>

using namespace std;


int printArray(int arr[],int n){

    for(int i=0; i<n; i++){
        cout<<arr[i]<< " ";
    }
    cout << endl;
}


int insert_sort(int arr[], int n){

    for(int i = 1; i < n; i++){

        int temp = arr[i] ;

        int j=i-1;

        for(; j>=0; j--){

            if(arr[j] > temp) {
                // shifting the element
                arr[j+1] = arr[j];
            }

            else {
                // if element larger break
                break;
            }

        }
        arr[j+1] = temp;
    }
}


int main(){

    int arr[8] = {43,8,4,14,67,23, 39, 55};

    insert_sort(arr,8);

    cout << "sorted array: " ;

    printArray(arr,8);
       
}
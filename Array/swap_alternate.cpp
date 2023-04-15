#include<iostream>

using namespace std;


void swap_alternate(int arr[], int n){

    for(int j=0; j<n; j = j+2){
        if(j+1 < n){
        swap(arr[j], arr[j+1]);

    }
    }
}

void printArray(int arr[], int n){

    for(int i=0; i< n; i++){

        cout<< arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int n =5;
    int arr[n];
    
    for(int i=0; i<n; i++){

        cin>>arr[i];

    }

    cout << " Array before swap: " ;
    printArray(arr,5);

    cout << " Array after swap: " ;

    swap_alternate(arr,5);
    printArray(arr,5);

return 0;

}
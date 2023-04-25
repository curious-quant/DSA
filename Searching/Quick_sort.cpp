#include<iostream>

#include<bits/stdc++.h>

using namespace std;

int partition(int arr[], int s, int e){

    int pivot = arr[s];

    int count = 0;

    for(int i =s+1; i <=e; i++){
        if(arr[i]< pivot){
            count++;
        }
    }

    // place pivot at right place

    int PivotIndex = s + count;
    
    swap(arr[PivotIndex], arr[s]);


    // left and Right to keep in check

    int i = s, j = e;

    while(i < PivotIndex && j > PivotIndex) {

        while(arr[i] < pivot)
        {
            i++;
        }
        while(arr[j] >  pivot)
        {
            j--;
        }

        if(i < PivotIndex && j > PivotIndex){
            swap(arr[i++], arr[j--]);
        }

    }

    return PivotIndex;


}


void quick__sort(int arr[], int s, int e){

// base case

    if(s>=e){
        return;
    }

    // Paratition
     int p = partition(arr, s, e);

    // Left part sort
    quick__sort(arr,s,p-1);

     // right part sort
    quick__sort(arr,p+1,e);


}



int main(){

     int arr[10] = {34,13,48,80,56,22,75,67,94,9};
    int n = 10;

    quick__sort(arr, 0, n-1);

     for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout  <<  endl;
}
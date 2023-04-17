#include<iostream>

using namespace std;

int binarySearch(int arr[], int n, int key){

    int start = 0;
    int end = n-1;

    int mid = start + (end-start)/2;

    while(start<=end){

        if(arr[mid] == key){
            return mid;
        }

        if(key > arr[mid]){
            start = mid+1;
        }
        else {
            end = mid-1;
}
    int mid = start + (end-start)/2;
}

return -1;
}

int main(){

int even[] = {2,4,6,8,12,18};

int index = binarySearch(even,6,8);

cout << "Key is foundt at : " <<  index << endl;

return 0;
}
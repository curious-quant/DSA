#include<iostream>

using namespace std;

int firstOccurence(int arr[], int n, int key){

    int start = 0;
    int end = n-1;
    int ans = -1;
    int mid =start+ (end-start)/2;


    while(start<=end){

        if(arr[mid] == key){
            ans = mid;
            end = mid-1;

        }

        if(key > arr[mid]){
            start = mid+1;
        }
        else {
            end = mid-1;
}
    int mid =start+ (end-start)/2;

}

return -1;
}


int main(){


    int arr[8] = {1,2,3,3,4,5,6,7};

    cout << " First Occurence of 3 at: " << firstOccurence(arr,8,3) << endl;

return 0; 

}
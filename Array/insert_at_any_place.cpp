#include<iostream>


using namespace std;

int insert_pos(int arr[], int n, int pos, int x){

    for(int i=n-1 ; i>= pos; i--){
        arr[i+1] = arr[i];
    }
    arr[pos] = x;
}

int main(){

    int arr[15] = {1,11,21,31,41,3,23,5};

    int n = 8;
    int i;
    cout << " Before Insertion: ";

    for(i = 0; i< n; i++){

        cout << arr[i] << " ";
    }
    cout <<  endl;
    int x = 10, pos = 2;

    insert_pos(arr, n, pos,x);
    cout << " After Insertion: ";

    for(i = 0; i<=n; i++){

        cout << arr[i] << " ";
    }

    cout << endl;
return 0;
}
#include<iostream>

using namespace std;

int insert_at_end(int arr[], int n , int key, int capacity){


	// Cannot insert more elements if n is
	// already more than or equal to capacity
	if (n < capacity)
		arr[n] = key;
        return n+1;


	return (n);
}


 int main(){


     int arr[20] = {12,16,20,40,70};

    int capacity = sizeof(arr)/ sizeof(arr[0]);
    int n = 6;
    int key = 26;
    int i;


cout << " Before Insertion: ";

for(i=0 ; i <n ; i++)
    cout << arr[i] << " ";


insert_at_end(arr, n ,key ,capacity);

cout<< " Afetr Insertion: ";

for(i = 0; i<n; i++)
    cout << arr[i] << " "; 

return 0;


 }
#include<iostream>

using namespace std;

int main(){

    int arr [] = { 12, 22, 45, 91, 8, 38};

   int n = sizeof(arr) / sizeof(arr[0]);

    for (int i=n-1; i>=0 ; i--){

        cout << arr[i] << " ";
    }


return 0;
}
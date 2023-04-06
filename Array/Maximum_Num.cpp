#include<iostream>

using namespace std;

int main(){

    int arr [] = { 12, 22, 45, 91, 8, 38};

   int n = sizeof(arr) / sizeof(arr[0]);

   int max = arr[0];
   int min = arr[0];

   for(int i =0; i< n ; i++){
       if(arr[i] > max){
           max = arr[i];
       }

       if(arr[i] < min){
           min = arr[i];
       }

   }

   cout << " Maximum Number is : " << max << endl;

   cout << " Minimum Number is : " << min << endl;


return 0;
}
#include<iostream>
#include<climits>

using namespace std;

int main(){

    int arr [] = {12,52,4,5,88,99,45,33,3 };



   int n = sizeof(arr) / sizeof(arr[0]);

   int max = INT_MIN;
   int min = INT_MAX;

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
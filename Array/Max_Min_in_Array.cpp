#include<iostream>
#include<climits>

using namespace std;

int GetMax(int arr[], int size){

    int max = INT_MIN;
  

   for(int i =0; i< size ; i++){

       if(arr[i] > max){

           max = arr[i];
       }
   }

   return max;
}


int GetMin(int arr[], int size){

 int min = INT_MAX;

 for(int i =0; i< size ; i++){

if(arr[i] < min){

    min = arr[i];

  }

 }

return min;
}


int main(){

    cout << "Enter size: ";
    int size;
    cin>> size;

    int arr [100];

    for(int i=0; i < size; i++){
        cin>>arr[i];
    }


   cout << " Maximum Number is : " << GetMax(arr,size) << endl;
    cout << " Minimum Number is : " << GetMin(arr,size) << endl;



return 0;
}
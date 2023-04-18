#include<iostream>

using namespace std;

int pivot_of_array(int arr[], int n)
{

    int s =0;

    int e = n-1;

    int mid = s + (e-s)/2;

    while(s<e){

        if(arr[mid] >= arr[0]){
            s = mid +1;
        }

        else{
            e = mid;
        }

        mid = s + (e-s)/2;
    }

    return s; // can write return e as well because at the end both will same value

    
}


int main(){

    int arr[5] = {3,8, 17,0 ,1};

    cout << " Pivot is: " << pivot_of_array(arr,5) << endl;

    


}
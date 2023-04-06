#include<iostream>

using namespace std;

int find_element(int arr[], int n, int key);




int pos = -1;
int find_element(int arr[], int n, int key){

    
    for(int i =0; i< n ; i++){

        if(arr[i] == key)  {
            pos = i;     
            
            
    }
 }
    if(pos == -1){
    cout << " Element not Found." << endl;
}
}


int main(){


    int arr[] = {11,21,31,41,51,61};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i;

    int key = 31;

    cout<< " Before Deletion: ";

    for(i=0 ; i<n ; i++){

        cout << arr[i] << " ";
    }

    Delete_element(arr,n, key);

    


    cout << " After Deletion:";

    for(i=0; i<n ; i++){

        cout << arr[i] << " ";
    }

return 0;
}

#include<iostream>

using namespace std;

int insert(int arr[],int n, int key){

int i;
    for( i=0; i < n; i++)

        if(arr[i] == key)
            return i;
        
    return -1;
    
}

int main(){

int arr[] = {11,22,33,44,55};

int n = sizeof(arr);

int key = 55;



int position = insert(arr,n,key);

cout << position << endl ;

if(position == -1){
    cout << " Key not found "<< endl;
}
else{
    cout << " Key is found at " << position +1  <<  endl;
}

return 0;
}
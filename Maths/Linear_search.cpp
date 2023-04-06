#include<iostream>

using namespace std;

int main(){

    int A[6] = {14,21,3,43,19,69};

    int key;

    cout<<"enter the key:" << endl;
    cin>>key;

    for(int i = 0;i<6;i++){

        if(key == A[i]){
            cout<<"key found at "<<i<<endl;
            
        }
    
}
    
      return 0;   
     
    }

    
   

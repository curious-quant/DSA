#include<iostream>

using namespace std;

int main(){

    int A[6] = {14,21,3,43,19,69};

    int key;

    cout<<"enter the key:" << endl;
    cin>>key;
    int pos = -1;
    for(int i = 0;i<6;i++){

        if(key == A[i]){
            pos = i;
            cout<<"key found at "<<pos<<endl;

        }
            
    }
    if(pos==-1){
        cout<<"key not found " <<endl;
    }
    
    
      return 0;   

    }

    
   

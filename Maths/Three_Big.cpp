#include<iostream>

using namespace std;

int main(){

    int a,b,c;

    cout<<"Enter first numbers: "<< endl;
    cin>>a;
    cout<<"Enter Second numbers: "<< endl;
    cin>>b;
    cout<<"Enter Third numbers: "<< endl;
    cin>>c;

    if(a>b){
        if(a>c)
            cout<<"a is the biggest number"<<endl;
        
        else
            cout<<"c is the biggest number"<<endl;
        
    }
    else{
        if(b>c)
            cout<<"b is the biggest number"<<endl;
        
        else
            cout<<"c is the biggest number"<<endl;
        
    
    }
    return 0;
}
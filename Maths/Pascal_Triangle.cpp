#include<iostream>

using namespace std;

int fact(int n) {
    int fac = 1;
    for(int i = 1; i<=n; i++){
        fac *= i;
    }

    return fac;
}

int main(){

    int num;
    cout<< " Enter a number: " << endl;
    cin>>num;

    for(int i =0; i<num; i++){
        for(int j =0; j<=i; j++){
            cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
        }
        cout<<endl;
    }
return 0;
}
#include<iostream>

using namespace std;

int main(){

    int n;

    cout<<" Enter a number: " << endl;
    cin>>n;
    int prod = 1;
    while(n>0){

        prod = prod*n;

        n = n-1;

    }

    cout << " Factorial of the Number " << prod << endl;
return 0;
}
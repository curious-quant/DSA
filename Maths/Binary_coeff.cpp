#include<iostream>

using namespace std;

int fact(int n){
    int fac = 1;
    for(int i=1; i <=n ; i++){
        fac *= i; 
    }
    return fac;
}

int main(){

    int n,r;
    cout<<" Enter n and r: " << endl;
    cin>>n>>r;

    int ans = fact(n)/(fact(r)*fact(n-r));

    cout << ans << endl;

return 0;
}


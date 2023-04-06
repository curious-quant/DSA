#include<iostream>

using namespace std;

int main(){

    int n;
    cout << " Enter a Binary Number: "<< endl;
    cin>>n;
    
    int ans = 0;
    int x = 1;
    
    while(x<= n){

x *= 2;
}
x = x/2;

while(x>0){

    int last_digit = n/x;

    n = n - last_digit *x;

    x = x/2;
    
    ans = ans *10 + last_digit;
}

cout << ans << endl;

return 0;

}
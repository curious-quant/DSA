#include<iostream>

using namespace std;

int main(){

    int n;
    cout << " Enter a Binary Number: "<< endl;
    cin>>n;
    
    int ans = 0;
    int x = 1;
    while(n>0){
    
    int y = n%10;
    ans += x *y ;

    x *= 2;

    n = n/10; 
}

cout<< " Decimal Number is: " << ans << endl;

return 0;

}
#include<iostream>      

using namespace std; 

int ans = 0;
int x = 1;

int main(){

int n;
cout << " enter a number " << endl;
cin>>n;

while(n>0){
int y = n%10;

ans += x*y;

x *= 8;

n = n/10;

}

cout<<" Decimal Number is: " << ans << endl;

return 0;

}
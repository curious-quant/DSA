#include<iostream>

using namespace std;

int main(){

    int n;

    cout<<" Enter a number: " << endl;
    cin>>n;
    
    int sum = 0 , org_num = n;
    while(n>0){

            int rem = n % 10;
        
            sum = sum + (rem * rem * rem); 

            n = n/10;

    }

    if(org_num == sum){
        cout<< " Given Number is a Armstrong Number " << endl;
    }
    else {
        cout << " Given Number is not a Armstrong Number " << endl;
    }

return 0;

}
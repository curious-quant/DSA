#include<iostream>

using namespace std;

int main(){

 int n;
cout << " Enter number: " << endl;

 cin>>n;
char value = 'A';
 for(int i = 1; i<=n; i++){

     for(int j = 1; j<=n; j++){
     cout << value;
     value++;
     
 }
 cout<<endl;
 }
    
    return 0;
}
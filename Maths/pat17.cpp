#include<iostream>

using namespace std;

int main(){

 int n;
cout << " Enter number: " << endl;

 cin>>n;

 for(int i = 1; i<=n; i++){

    int space = i-1;

     while(space){

         cout << " ";
         space = space - 1;
        
     } 

     for(int j = 1; j<=n-i+1; j++){
         cout << "*";
        
 }
 cout<<endl;
 }
    
    return 0;
}
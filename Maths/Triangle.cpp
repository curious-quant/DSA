#include<iostream>

using namespace std;

int main(){

int n;

cout<< " Enther the number of the rows: "<<endl;

cin>>n;

for(int i=1; i<=n; i++){

    for(int j=0 ; j < i; j++){

        cout<<"*";
    }
   cout<<endl;
}

return  0;

}
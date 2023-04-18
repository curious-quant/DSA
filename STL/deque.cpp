#include <iostream>

 #include<deque>

using namespace std;

int main(){

deque<int> d;

d.push_back(1);
d.push_front(2);

// d.pop_back();

for(int i =0;i< d.size();i++){
    cout << d[i] << " ";
}
cout<<  endl;



cout << " First element: " << d.front()<< endl;
cout << " First element: " << d.back()<< endl;

cout << " Is empty or not: " << d.empty() << endl;

cout << " Before erase: " << d.size() << endl;

d.erase(d.begin(), d.begin()+1); // erase 1 element 

cout << " Before erase: " << d.size() << endl;

}
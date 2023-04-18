#include <iostream>

 #include<vector>

using namespace std;

int main(){

int basic[3] = {1,2,3};

vector<int> v;

vector<int> a(5,1); // creating vector size 5, with all elemet 1
cout << " Vector a: ";
for(int i=0; i< a.size();i++){
    cout << a[i] << " ";
} 
cout <<  endl;

vector<int> last(a); // copying vector a into vector last 

cout << " Vector last: ";
for(int i=0; i< last.size();i++){
    cout << last[i] << " ";
} 
cout <<  endl;


cout << " Size : "<< v.capacity() << endl;

v.push_back(1);
cout << " Size : "<< v.capacity() << endl;

v.push_back(2);
cout << " Size : "<< v.capacity() << endl;


v.push_back(3);
cout << " Size : "<< v.capacity() << endl;
cout << " Size : "<< v.size() << endl;

cout << "Element at 2nd index: " << v.at(2) << endl;

cout << " First Element: " << v.front() << endl;
cout << " First Element: " << v.back() << endl;

cout << " Vector before pop back : ";

for(int i=0; i< v.size();i++){
    cout << v[i] << " ";
} 
cout <<  endl;

v.pop_back(); // remove last element in vector

cout << " Vector After pop back : ";
for(int i=0; i< v.size();i++){
    cout << v[i] << " ";
} 
cout <<  endl;


}

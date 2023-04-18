#include <iostream>

 #include<stack>

using namespace std;

int main(){

stack<string> s;// created stack, LIFO

s.push("apple");
s.push("mango");
s.push("banana");

cout << " top elemet is: " << s.top() << endl;

s.pop(); // pop banana, because its on top

cout << " top elemet is: " << s.top() << endl;



}
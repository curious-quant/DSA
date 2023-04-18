#include <iostream>

 #include<queue>

using namespace std;

int main(){

queue<string> q;// created stack, LIFO

q.push("apple");
q.push("mango");
q.push("banana");

cout << " top elemet is: " << q.front() << endl;

q.pop(); // pop apple, because its in front FIFO

cout << " top elemet is: " << q.front() << endl;



}
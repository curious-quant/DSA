#include <iostream>

 #include<list>

using namespace std;

int main(){

list<int> l;

l.push_back(1);
l.push_front(2);

// d.pop_back();

for(int i:l){
    cout << l[i] << " ";
}
cout<<  endl;

}
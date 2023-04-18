#include <iostream>

 #include<set> // set stores unique elemet

using namespace std;

int main() {

    set<int> s;

s.insert(5);
s.insert(1);
s.insert(6);
s.insert(0);

for(int itr :s)
{
    cout << itr << " " ;
}

}


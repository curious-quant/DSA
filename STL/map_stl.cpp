#include <iostream>

 #include<map> 

using namespace std;

int main() {

    map<int, string> m; // key value pair

    m[1] = "Mango";
    m[13] = "Apple";
    m[2] = "Banana";
     
 m.insert( {5, "Orange"} );
 cout << " Before Erase: " << endl;
    for(auto i:m){
        cout << i.first << " " << i.second <<  endl;
    }
cout << " finding 13 ->" << m.count(13) << endl;

m.erase(13);
cout << "After Erase:" << endl;

for(auto i:m){
        cout << i.first << " " << i.second <<  endl;
    }
    
auto it = m.find(5);

for(auto i = it; i!=m.end();i++){
    cout << (*i).first << endl;
}
}
    

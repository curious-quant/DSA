#include<iostream>

using namespace std;

int max (int x, int y,int z){

    if(x>y){
        if(x>z){
            cout<< x;
        }
        else{
            cout<< z;
        }
    }
    else{
        if(y>z){
            cout<< y;
        }
        else{
            cout<< z;
        }
    }   
}

int main(){
    int x1,y1,z1;
    
    cout << " Enter Three number " << endl;
    cin>>x1>>y1>>z1;
    
    int  a = max(x1,max(y1,z1));
    int b,c;
    if(a == x1){
        b = y1;
        c = z1;
    }
    else if(a == y1){
        b = x1;
        c = z1;
    }
    else {
        b = x1;
        c = y1;
    }

    if( a*a == b*b + c*c){
        cout << " It is a Pythogonean Triangle " << endl;
    }

    else {
        cout << " Not a Pythogonean Triangle "<<endl;
    }
    
return 0;
}

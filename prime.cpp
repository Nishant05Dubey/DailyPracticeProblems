#include<iostream>
using namespace std;

int Primeno(int n){
    for(int i=2 ; i<=n ; i++){
        if(n%i != 0){
            return true ;
        }return false;
    }
}
int main(){
    cout << "prime no from 2 to 10 are " << endl ;
    for (int i=2 ; i<10 ; i++){
        if(Primeno(i)){
            cout << i << endl;
        }

    } return 0;
}
#include <iostream>
 #include <vector>
using namespace std;
int main(){
    vector<int>vec;
    vec.push_back(9);
    vec.push_back(3);
    vec.push_back(5);
    vec.push_back(35);
    vec.push_back(53);
    vec.push_back(51);
  

    cout<< vec.size()<<endl;
    cout<< vec.capacity()<<endl;

    return -1;
}
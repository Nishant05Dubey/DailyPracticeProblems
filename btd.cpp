#include <iostream>
using namespace std;

int binNum(int n){
    int ans = 0 , pow = 1;
    while (n>0){
        int rem = n % 10;
        ans += (rem*pow);
        n /= 10;
        pow *= 2;
    } return ans;
}
int main(){
    int n = 101010;
    cout<<binNum(n)<<endl;
    return 0;
}
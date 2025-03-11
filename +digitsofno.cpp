#include<iostream>
using namespace std;

int digitSum(int num){
    int digsum = 0;

    while(num > 0){
        int lastdigit = num%10;
        num /=10;
        digsum += lastdigit;
        
    } return digsum;
}
int main(){
    cout<<digitSum(2345)<<endl;
    return 0;
}
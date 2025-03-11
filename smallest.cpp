#include <iostream>
#include <limits.h>
using namespace std;

int main(){

    int nums[5]={67,45,23,76,23};
    int size = 5;
    int largest = INT_MIN;

    for(int i=0 ; i<size ; i++){
    if(nums[i] > largest){
        largest = nums[i]; 
    }
    } 
     cout<<largest<<endl;
    return 0;
    
}
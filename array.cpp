#include <iostream>
using namespace std;

void main{

    int nums[5]={60,45,23,76,23};
    int size = 6;
    int smallest = INT_MAX;

    for(int i=0 ; i<=size ; i++){
    if(nums[i] < smallest){
        smallest = nums[i]; 
    }
    } 
     cout<<smallest<<endl;
    return 0;
    
}
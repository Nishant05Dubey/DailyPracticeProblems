#include <iostream>
using namespace std;

int linearsearch(int arr[] , int size , int target){
    for(int i=0 ; i<=size ;i++ ){
        if(arr[i]==target){
            return i;
        }
    } return -1;
}

int main(){
    int arr[] = {2,4,6,8,3,5,4};
    int size = 7;
    int target = 3;

   cout<< linearsearch( arr , size , target)<<endl;
   return 0;
}





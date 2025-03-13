#include <iostream>
using namespace std;
void reverse( int arr[] , int size){
    int start = 0 , end = size - 1;

    while( start < end ){
     swap( arr[start], arr[end]);
     start++;
     end--;
    }
}

int main(){
    int arr[] = { 2,4,2,5,7,4,3 };
    int size = 7 ;

    reverse(arr , size);

    for( int i=0 ; i<size ; i++){
        cout<<arr[i]<<" ";
    } cout << endl;
    return 0;

}
#include <iostream>
 #include <vector>
using namespace std;

int main(){

   vector<int> vec={5,6,7,8,4};
   cout<< "size = "<<vec.size()<<endl;

   vec.push_back(20);
   cout<< "after push back size = "<<vec.size()<<endl;

   vec.pop_back();
   cout<< "after pop back size = "<<vec.size()<<endl;

//    for (int i: vec){
//     cout <<i<<endl;
//    }
   cout<<vec.at(2)<<endl;
   
   return 0;
} 
#include <iostream>
using namespace std;
int get_greater(int size){
    int max = -2000000, x;
  for (int i = 0; i < size; i++){
      cin>>x;      
      if (x > max)
        max = x;
  }  
  return max;
};
int main(){
    cout<<get_greater(4)<<endl;
    return 0;
}
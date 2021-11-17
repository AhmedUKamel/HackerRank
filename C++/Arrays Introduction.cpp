#include <iostream>
using namespace std;
int main(){
    int numbers[1000], size;
    cin>>size;
    for (int i = 0; i<size;i++){
        cin>>numbers[i];
    }
    for (int i = size-1; i >= 0; i--){
        cout<<numbers[i]<<" ";
    }
    return 0;
}
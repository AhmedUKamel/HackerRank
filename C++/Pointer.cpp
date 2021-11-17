#include <iostream>
using namespace std;
void update(int &a, int &b){
    int temp = a;
    a = a + b;
    b = abs(b-temp);
    cout<<a<<endl;
    cout<<b<<endl;
};
int main(){
    int x, y;
    cin>>x>>y;
    update(x, y);
    return 0;
}
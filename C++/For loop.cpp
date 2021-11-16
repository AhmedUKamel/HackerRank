#include <iostream>
using namespace std;
int main(){
    
    long start, end;
    cin>>start>>end;
    for (int i = start; i <= end; i++){
        switch(i>9){
            case 1:
                switch(i%2){
                    case 0:
                        cout<<"even"<<endl;
                        break;
                    case 1:
                        cout<<"odd"<<endl;
                        break;
                }
            case 0:
                switch(i){
                    case 1:
                        cout<<"one"<<endl;
                        break;
                    case 2:
                        cout<<"two"<<endl;
                        break;
                    case 3:
                        cout<<"three"<<endl;
                        break;
                    case 4:
                        cout<<"four"<<endl;
                        break;
                    case 5:
                        cout<<"five"<<endl;
                        break;
                    case 6:
                        cout<<"six"<<endl;
                        break;
                    case 7:
                        cout<<"seven"<<endl;
                        break;
                    case 8:
                        cout<<"eight"<<endl;
                        break;
                    case 9:
                        cout<<"nine"<<endl;
                        break;
                }
        }
    }
    return 0;
}
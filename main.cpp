#include <iostream>
using namespace std;

int add(int a, int b){
    return a + b;
}

int sub(int a, int b){
    return a - b;
}

int main(){
    int x = 10, y = 5;
    
    cout << "Add: " << add(x, y) << endl;
    cout << "Sub: " << sub(x, y) << endl;
    
    return 0;
}

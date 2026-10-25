#include <iostream>
using namespace std;

int add(int a, int b){
    return a + b;
}

int sub(int a, int b){
    return a - b;
}
int mul(int num1, int num2){
	
	return num1*num2;
}
int divi(int num1, int num2){
	return num1/num2;
}
int rem(int num1, num2){
	return num1%num2;
}

int main(){
    int x = 10, y = 5;
    
    cout << "Add: " << add(x, y) << endl;
    cout << "Sub: " << sub(x, y) << endl;
     cout << "mul: " << mul(x, y) << endl;
      cout << "divi: " << divi(x, y) << endl;
    
    cout << "rem: " << rem(x, y) << endl;
    
    return 0;
}

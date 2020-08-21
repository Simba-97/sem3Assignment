#include <iostream>
using namespace std;

void print(int n){
    cout << n << endl;
   
}
void print(double n){
    cout << n << endl;
}
void print(char n){
    cout << n << endl;
}
void print(string n){
    cout << n << endl;
}
int main(){
    print(1);
    print(10.10);
    print('c');
    print("Hello");
    return 0;
}
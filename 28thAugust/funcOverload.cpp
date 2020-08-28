#include <iostream>
using namespace std;

int a, l, b;
float r, bs, h;

int area(int a){
    int Area = a*a;
    return Area;
}
float area(float r){
    float Area = 3.14*r*r;
    return Area;
}
int area(int l, int b){
    int Area = l*b;
    return Area;
}
float area(float bs, float h){
    float Area = 0.5*bs*h;
    return Area;
}

int main(){
    int type = 0;
    float calculatedArea;
    cout << "Enter the Number for the type of figure ";
    cin >> type;
    if(type==1){
        cout << "Enter the side of the square ";
        cin >> a;
        calculatedArea = area(a);
    }else if(type==2){
        cout<< "Enter the radius of the Circle ";
        cin >> r;
        calculatedArea = area(r);
    }else if(type == 3){
        cout << "Enter the length and breadth of the rectangle ";
        cin >> l >> b;
        calculatedArea = area(l, b);
    }else{
        cout << "Enter the base and height of the triangle ";
        cin >> bs >> h;
        calculatedArea = area(bs, h);
    }
    
    cout << "The Area of the asked figure is " << calculatedArea << endl;
    
    return 0;
}
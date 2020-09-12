#include <iostream>
using namespace std;

class Circle{
    private:
        int radius;
        float area;
    public:
        Circle(){
            cout<<"Enter the radius of the Circle: ";
            cin >> radius;

            area = 3.14 * radius* radius;
        }
        void display(){
            cout<<"Area of the circle is: " << area << endl;
        }
};

class Rectangle{
    private:
        int length;
        int breadth;
        int area;
    public:
        Rectangle(){
            cout<<"Enter the length and breadth of the rectangle: ";
            cin >> length >> breadth;
            
            area = length*breadth;
        }
        void display(){
            cout<<"Area of the rectangle is: " << area << endl; 
        }
};
int main(){
    Circle obj;
    obj.display();
    Rectangle obj1;
    obj1.display();
    return 0;
}

#include<iostream>

using namespace std;

class Emp
   {

      public:
      int id;
      int age;
      int salary;
      string fullname;

      void getdata(){
           cout<<"ID"<<endl;
           cin>>id;
           cout<<"age"<<endl;
           cin>>age;
           cout<<"Salary"<<endl;
           cin>>salary;
           cout<<"name"<<endl;
           cin.ignore();
           getline(cin, fullname);

         }

      void display(){
         cout<<"ID: "<<id<<endl<<"Age: "<<age<<endl<<"Salary: "<<salary<<endl<<"Full Name: "<<fullname<<endl;

      }
};


int main()
{
    Emp e[5];

    for(int i=0;i<5;i++){
        e[i].getdata();
    }
    for(int i=0;i<5;i++){
        e[i].display();
    }
    return 0;

}
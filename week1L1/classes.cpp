#include <iostream>
using namespace std;

class Student{
public:
    string name;
    int age;

    void introduceMyself(){
        cout<<"Hi My name is "<<name<< " and I am "<< age << " years old"<< endl;
    }
};
// constructors
class Rectangle{
// variables are private by default
int width;
int height;
public:
    //create a constructor
    Rectangle(int w, int h): width(w), height(h){}
    int area(){
        return width * height;
    }
};


int main(){
    Student s1;
    s1.name = "Adham";
    s1.age = 20;
    s1.introduceMyself();
    Rectangle r1(3, 7);
    cout<< "The area of the rectangle is: "<<r1.area()<<endl;


}
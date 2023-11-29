#include<iostream>
using namespace std;
class person{
public:
    string name;
    int age;
    person(){

    }
    void display1(){
   
    cout<<"Name :"<<name<<endl;
    cout<<"Age :"<<age<<endl;
    }
};
class student : public person{
public:
    int id;

    student() {

    }
void display2(){
display1();

cout<<"ID :"<<id<<endl;
    }
};
class postgraduateStudent : public student{
public:

    float graduationCGPA;
    void display3(){
display2();

cout<<"CGPA :"<<graduationCGPA<<endl;
    }
};

int main()
{
    postgraduateStudent obj;
    obj.name="zahid abdullah";
    obj.age=21;
    obj.id=998;
    obj.graduationCGPA=3.71;

    obj.display3();
}
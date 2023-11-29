// #include <iostream>
// using namespace std;
// class parent{
//     private:
//     int a;
//     protected:
//     int x;
//     public :
//     int p;
// };
// class  child1:public parent{
// public:
// child1(){
//     cout<<"child"<<endl;
// }
// };
// class  child2:public parent{
    
// }; 
// class  child3:public parent{
   
// };

// int main (){

//     child3 c3;
//     child2 c2;
//     child1 c1;
// }
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
#include <iostream>
using namespace std;


class myclass{
    int a;
    double b;
    public:
    myclass(){
        cout<<"this is a defult constructor"<<endl;
        cout<<"here the values are"<<" "<<a<<" "<<b<<endl;
    }
    myclass(int a){
       this->a=a;
        this->b=6.9;
        cout<<"this is a defult parameter constructor"<<endl;
        cout<<"here the values are"<<" "<<a<<" "<<b<<endl;
    }
    myclass(int _a,double _b){

       this->a=a;
        this->b=b;
         cout<<"this is a double parameter constructor"<<endl;
        cout<<"here the values are "<<" "<<a<<" "<<b<<endl;

    }
myclass(myclass& other){
         this->a=other.a;
         this->b=other.b;
          cout<<"this is copy constructor"<<endl;
        cout<<"here the values are "<<" "<<a<<" "<<b<<endl;
}

};
int main(){



myclass ob1;
myclass ob2(995);
myclass ob3( 345, 7.89);
myclass ob4(ob3 );


// implement of polymorphism using defferent type of condstructor theory te defination dite hobe



    return 0;
}
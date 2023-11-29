#include <iostream>
using namespace std;

class myClass {
    int i; // default 65
    int j; // defailt 50
    float c; // default 3.98
public:
    myClass() {
        i = 65;
        j = 50;
        c = 3.98;
      
    }

    myClass(int _i) {
        i = _i;
        j = 50;
        c = 3.98;
    }

    myClass(int _i, float _c) {
        i = _i;
        j = 50;
        c = _c;
    }

    myClass(float _c) {
        i = 65;
        j = 50;
        c = _c;
    }
};
class calculator {
public:
    int sum(int a, int b) {
        return a+b;
    }

    float sum(int a, float b) {
        return a+b;
    }

    float sum(float a, float b) {
        return a+b;
    }
};

int main() {
    myClass ob;
    myClass ob1(34);
    myClass ob2(32, 3.66);
    myClass ob3((float)4.5);

    calculator c;

    cout<< c.sum(1, 2) << endl; // 3
    cout<< c.sum(1, 5) << endl;
    cout<<c.sum(1,(float)3.1)<< endl; // 4.1
    cout<<c.sum(1,(float)4.1)<<endl; 
    cout<<c.sum((float)1.1,(float) 2.1)<<endl; // 3.2
}

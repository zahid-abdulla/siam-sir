#include<iostream>
using namespace std;
  class Myclasss{
    int a;
    int b;
    public:
  Myclasss(int x,int y){
    a=x;
    b=y;
  }
    
    void show_ab(){
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
     
    }

};


int main (){

Myclasss ob(10,20);
ob.show_ab();

 
}
// introduction of  class ,object and constructor
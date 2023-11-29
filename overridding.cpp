#include <iostream>
using namespace std;
class father{
    public :
    void display(){
   // cout<<"person"<<endl;

    cout<<"Father Class"<<endl;
   
    }
};
class  son:public father{
    public:
    son (){
     cout<<"son Class"<<endl;   
    }
};
class  daughter:public STDERR_FILENO{
    public:
    daughter (){
     cout<<"daughter Class"<<endl;   
    } 
}; 


int main (){

    father fo;
    fo.display();
    son so;
    so.display();
   daughter dau;
   dau.display();
}
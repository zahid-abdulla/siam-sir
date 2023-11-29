#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    cout<<setw(20)<<"Geekyshow"<<endl;
    cout<<setprecision(4)<<12.239<<endl;
     cout<<setw(10)<<setprecision(4)<<12.239<<endl;

}
#include <iostream>
#include <iomanip>
using namespace std;
    ostream & geekyshows(ostream & output){
        output<<"Rs.";
        return output;
    }
int main(){
    cout<<geekyshows<<12.2000<<endl;
}
#include <iostream>
#include <iomanip>
using namespace std;
    ostream & geekyshows(ostream & output){
        output.setf(ios::showpoint);
        output<<setprecision(4);
        output<<setfill('#');
        output.width(10);
        
        return output;
    }
int main(){
    cout<<geekyshows<<12.2000<<endl;
    cout<<geekyshows<<40.2000<<endl;
}
#include <iostream>
#include<fstream>
using namespace std;
int main (){

    char name [50];
    int roll;
    ofstream outfile ("student");
    cout<<"Enter the student Name:";
    cin>>name;
    cout<<"Enter the roll:";
    cin>>roll;
    outfile<<name<<endl;
    outfile<<roll<<endl;
    outfile.close();
    ifstream infile ("student");
    infile>>name;
    infile>>roll;
    cout<<"Name:"<<name<<endl;
    cout<<"Roll"<<roll<<endl;
    infile.close();
    return 0;
}
#include <iostream>
#include <iomanip>

#include "myheader.h"
using namespace std;
int main(int args ,char** argv){

    system("chcp 65001");
    cout<<"X |";
    for(int m=1;m<=9;m++){
        cout.width(3);
    cout<<m;
    }
    cout<<"\n-----+----------------------\n";
    for(int m=1;m<=9;m++){
        cout.width(2);
        cout<<m<<" |";
        for(int p=1;p<=9;p++) {
            cout.width(3);
            cout<<m*p;
        }
        cout<<endl;
        }

    //    cout<<setw(20)<<setfill('$')<<left<<"巨匠電腦"<<endl;
//cout.width(20);
//cout.setf(ios::left,ios::adjustfield);
//cout.fill('*');
//cout<<"巨匠電腦"<<endl;
//cout.unsetf(ios::adjustfield);
//    cout<<"巨匠電腦"<<endl;
//Person amy;
//amy.name="陳愛咪";
//amy.age=120;
//amy.sayHello();
//
//cout<<"\n======================\n";
//sayHello();
//    return 0;
}



//
// Created by yu1879 on 2023/5/6.
//
#include <iostream>
#include <iomanip>
using namespace std;
int main(int args ,char** argv) {

    bool flag=false;
    cout<<boolalpha<<flag<<endl;
    cout<<flag<<endl;
    cout<<flag<<endl;
    cout<<flag<<endl;
    cout<<flag<<endl;
    cout<<flag<<endl;
    cout<<noboolalpha<<flag<<endl;
    int age=25;
    cout<<age<<endl;
    cout<<showpos<<age<<endl;
float  score=123.456789;
cout<<fixed<<setprecision(4)<<score<<endl;
    return 0;
}


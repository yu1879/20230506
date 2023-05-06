//
// Created by yu1879 on 2023/5/6.
//
#include <iostream>
using namespace std;
int main(int args,char** argv ){
int a=200;
int * p;
p=&a;
cout<<"p的內容為:"<<p<<endl;
    cout<<"a的位址為:"<<&a<<endl;
    cout<<"a的內容為:"<<a<<endl;
    cout<<"p儲存的位址所儲存的內容為:"<<*p<<endl;
*p=500;
    cout<<"p儲存的位址所儲存的內容為:"<<*p<<endl;
    cout<<"a的內容為:"<<a<<endl;

//int a=200;
//cout<<"a的內容:"<<a<<"a變數的地址為:"<<&a<<endl;
//int c=500;
//int * p;
////a=&c;
//p=c;
//
//
//    return 0;
};

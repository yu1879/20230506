//
// Created by yu1879 on 2023/5/6.
//

#include <iostream>
using namespace std;
namespace pcschool{
    const double RATE=0.05;
}
void sayHello();
void sayHello(){
    cout<<"大家好，我是一般的函數，不是物件的member function\n";
}
class Person{
public :
    string name;
    int age;
    void sayHello(){
    cout<<"我是成員函數，我的名字叫:"<<name<<",今年:"<<age<<"歲，大家好\n";
}

};

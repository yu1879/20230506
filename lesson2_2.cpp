//
// Created by yu1879 on 2023/5/6.
//
#include <iostream>
#include <cstring>
using namespace std;

int main(){
//字元陣列所構成的字串無法使用關係運算子來判斷字串是否相同
//    char pw[]="pc";
//    char guess[10];
//    cout<<"請輸入密碼:";
//    cin>>guess;
//    cout<<"您輸入的密碼是:"<<guess<<endl;
//    //判斷密碼是否正確,若正確顯示歡迎光臨,否則顯示密碼錯誤
//    if(strcmp(pw,guess)==0)
//        cout<<"歡迎光臨\n";
//    else
//        cout<<"密碼錯誤\n";
    string pw="aaa";
    string guess="";
    cout<<"請輸入密碼:";
    cin>>guess;
    cout<<"您輸入的密碼是:"<<guess<<endl;
    //判斷密碼是否正確,若正確顯示歡迎光臨,否則顯示密碼錯誤
    if(pw>guess)
        cout<<"歡迎光臨\n";
    else
        cout<<"密碼錯誤\n";

    return 0;

}

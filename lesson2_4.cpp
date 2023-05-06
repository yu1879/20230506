//
// Created by yu1879 on 2023/5/6.
//
#include <iostream>
using namespace std;
int main(){
int a[]={10,20,30,40,50};
cout<<"a變數名稱即為指標，儲存陣列第一個空間的位址:"<<a<<endl;
    cout<<"利用指標取值符號取得陣列內容:"<<*a<<endl;
    cout<<"利用傳統方式陣列存取方式取得陣列第一個元素:"<<a[0]<<endl;
    cout<<"利用指標取值符號取得陣列第二個內容:"<<*(a+1)<<endl;
    cout<<"利用傳統方式陣列存取方式取得陣列第二個元素:"<<a[1]<<endl;

//int lotteTypel,max ;
//int *lotto;
//cout<<"請選擇 \n 1.三星彩\n 2.四星彩 \n";
//cin>>lotteTypel;
//max=lotteTypel==1?3:4;
//cout<<max<<endl;
//
//lotto=new int(max);


    return 0;
}

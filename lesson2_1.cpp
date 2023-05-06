#include <iostream>
#include <iomanip>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
    int max,sum=0;
    bool flag;
    do {
        flag=false;
        cout<<"設定終止值：";
        cin>>max;
        //判斷max是否介於2-100間
        if(max>=2 && max<=100) {
            for(int m=1; m<=max; m++) {
                //判斷是否為奇數,若是則相加,後面符號為-
                if(m%2!=0) {
                    //判斷是否為最後一個數字
                    if(m!=max)
                        cout<<m<<"-";
                    else
                        cout<<m;
                    //奇數相加
                    sum+=m;
                } else {
                    //偶數
                    if(m!=max)
                        cout<<m<<"+";
                    else
                        cout<<m;
                    //偶數相減
                    sum-=m;
                }
            }
            cout<<"="<<showpos<<sum<<endl;

        } else {
            flag=true;
            cout<<"Range : 2 To 100\n";
        }

    } while(flag);

//    bool flag=false;
//    cout<<boolalpha<<flag<<endl;
//    cout<<flag<<endl;
//    cout<<flag<<endl;
//    cout<<flag<<endl;
//    cout<<flag<<endl;
//    cout<<flag<<endl;
//    cout<<noboolalpha<<flag<<endl;
//    int age=25;
//    cout<<age<<endl;
//    cout<<showpos<<age<<endl;
//float  score=123.456789;
//cout<<fixed<<setprecision(4)<<score<<endl;

    return 0;
}
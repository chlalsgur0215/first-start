#include <iostream>
using namespace std;
int main()
{
    int A, B, C;
    cin >> A >> B >> C;
    int money;
    int maxNum = A > B ? A : B;
    maxNum = maxNum > C ? maxNum : C;
    if (A == B && B == C){
        money = 10000 + A * 1000;
    }else if (A == B || B == C || C == A){
        if(A == B | A == C){
            money = 1000 + A * 100;
        }else{
            money = 1000 + B * 100;
        }
    }else{
        money = maxNum * 100;
    }
    cout << money;
}

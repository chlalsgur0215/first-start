#include <iostream>
using namespace std;
int main()
{
    int A, B;
    cin >> A >> B;
    if (B >= 45){
        B = B - 45;
    } else{
        if (A == 0){
            A = 23 + A;
        } else {
            A = A - 1;
        }
        B = B + 15;
    }
    cout << A << ' '<< B;
}

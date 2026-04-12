#include <iostream>
using namespace std;
int main()
{
    int A, B;
    while(true){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cin >> A >> B;
        if(A == 0 && B == 0){
            break;
        }
        cout << A + B << '\n';
    }
}

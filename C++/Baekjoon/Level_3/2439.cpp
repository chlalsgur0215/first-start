#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int num;
    cin >> num;
    for (int i = 0; i < num; i++){
        for (int k = 0; k < num - i - 1; k++){
            cout << " ";
        }
        for ( int k = 0; k <= i; k++){
            cout << "*";
        }
        cout << '\n';
    }
}

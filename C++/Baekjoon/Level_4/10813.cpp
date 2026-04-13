#include <iostream>
using namespace std;
int main()
{
    int N, M;
    int i, j, k;
    int basket[100] ={0};
    cin >> N >> M;
    for(int n=1; n<=N; n++){
        basket[n] = n;
    }
    for(int n=0; n<M; n++){
        cin >> i >> j;
        k = basket[j];
        basket[j] = basket[i];
        basket[i] = k;
    }
    for(int n=1; n<=N; n++){
        cout << basket[n] << ' ';
    }
}

#include <iostream>
using namespace std;
int main()
{
    int N, M;
    int i, j, k;
    int basket[100] ={0};
    cin >> N >> M;
    for(int n=0; n<M; n++){
        cin >> i >> j >> k;
        for(i; i <= j; i++){
            basket[i] = k;
        }
    }
    
    for(int n=1; n<=N; n++){
        cout << basket[n] << ' ';
    }
}

// basket[100] = {0]으로 초기값을 0으로 넣음. 초깃값 안넣으면 쓰레기값 들어감.
//마지막 for문 1부터 시작하는 이유는 i, j에 바구니 범위는 그대로 지정하고, 0부터 시작하면 안됨.

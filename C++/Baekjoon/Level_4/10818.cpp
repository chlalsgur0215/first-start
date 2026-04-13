#include <iostream>
using namespace std;
int main()
{
    int N;
    static int array[1000000];
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> array[i];
    }
    int max = array[0];
    int min = array[0];
    for(int i=0; i<N; i++){
        max = max < array[i] ? array[i] : max;
        min = min > array[i] ? array[i] : min;
    }
    cout << min << ' ' << max;
}

// static은 백준에서 돌릴땐 없어도 됨. vscode에서 오류나서 붙임.
//min, max가 0이 아닌 이유는 조건에서 음수,양수가 가능했기 때문임. array[0]으로 설정하면 됨.

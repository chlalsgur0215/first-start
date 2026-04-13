#include <iostream>
using namespace std;
int main()
{
    int array[9], max, num=1;
    for(int i=0; i<9; i++){
        cin >> array[i];
        
    }
    max = array[0];
    for(int i=0; i<9; i++){
        if(max < array[i]){
            max = max < array[i] ? array[i] : max;
            num = i + 1;
        }
    }
    cout << max << '\n' << num;
}

//num=1을 쓴 이유는 array[0]이 최대값이라면 max값에 들어가고, 아래 if문 실행이 안돼서 num에 값이 안들어감.

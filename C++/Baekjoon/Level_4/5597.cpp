#include <iostream>
using namespace std;
int main()
{
    int student[31] = {0}, index;
    for(int i=0; i<28; i++){
        cin >> index;
        student[index] = 1;
    }
    for(int i=1; i<=30; i++){
        if(student[i] == 0){
            cout << i << '\n';
        }
    }

}

// 30번까지 있으니 30번이 올 수 있게 배열은 31로, 디폴트 0으로.
// for문 28번 돌려서 28명 낸 사람의 번호를 student배열 인덱스값으로 사용. 낸 사람은 1 저장
// 다음 for문에서는 학생 1~30번까지 있으니 1~30으로 반복문 돌리고 0인사람 찾아서 출력. 1 >> 30 이니 작은순대로 출력 됨

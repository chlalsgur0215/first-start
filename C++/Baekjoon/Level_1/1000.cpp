#include <iostream>
using namespace std;
int main()
{
    int A, B;
    cin >> A >> B;
    cout << A + B;
}
//cin = scanf() / cout = printf() 
// >> , << 로 방향 지정 A+B를 출력한다 ? cout으로 보내기 , 값을 넣는다? >> 로 변수에 넣기
// cin, cout 끝에 endl을 넣거나 \n을 넣어 줄바꿈을 넣어야 함.
//  ㄴ endl은 줄바꿈 + 버퍼 비우기(flush()). 출력 버퍼에 잠시 쌓여있는 모든 데이터를 즉시 화면으로 쏟아냄.?
//     endl는 한번에 모았다가 보내고, \n은 버퍼를 비워내지 않아 \n이 속도는 더 빠름.

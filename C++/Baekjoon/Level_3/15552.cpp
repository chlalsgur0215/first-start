#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int num, A, B;
    cin >> num;
    for (int i = 0; i < num; i++){
        cin >> A >> B;
        cout << A + B << '\n';
    }
}
//ios_base::sync_with_stdio(false); iostream과 stdio 사이의 동기화를 끊어 C와 C++ 의 cin,cout / scanf, printf를 섞어쓰지 못하게 해 속도를 올림.
// 원래는 cin scanf 이런거 섞어 쓸 수 있는데 false로 설정해 동기화를 끊으면 C++의 cin, cout만 사용이 가능하게 됨. (섞어쓰기 주의)

//cin.tie(NULL); cin과 cout의 묶음을 해제함. 기본적으로 cin은 입력받기 전 cout 버퍼를 비워(flush) 화면에 출력하도록 설정되어있음. 이 연결을 끊어 입출력의 지연을 줄임.
//cout은 출력기능이 아닌, 버퍼에 저장하는 기능이 있는거라 보면 됨. 그걸 cin이 cout을 비워주는것. 그게 없으니 이제 main함수가 끝나면 cout에 저장되어있던 버퍼가 한번에 출력되는것임.
//콘솔창에서는 계속해서 출력되지만, 실제 실행에서는 모아서 방출함.

//cout << ... << '\n' , flush , endl이 있음
//\n이 줄바꿈만(버퍼에 넣음), flush는 버퍼를 비우기까지(즉시 내보내기 때문에 느려짐), endl는 줄바꿈 + 비우기여서 더 느림

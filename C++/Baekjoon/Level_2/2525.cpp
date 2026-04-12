#include <iostream>
using namespace std;
int main()
{
    int A, B, C;
    cin >> A >> B;
    cin >> C;
    if ((C % 60 + B) < 60){
        B = B + C % 60;
        if (C / 60 + A < 24){
            A = A + C / 60;
        } else{
            A = A + C / 60 - 24;
        }
    } else{
        B = B + C % 60 - 60;
        A = A + 1;
        if (C / 60 + A < 24){
            A = A + C / 60;
        } else{
            A = A + C / 60 - 24;
        }
    }
    cout << A << ' '<< B;
}


// -------------------------------------------
// #include <iostream>
// using namespace std;
// int main()
// {
//     int A, B, C;
//     cin >> A >> B;
//     cin >> C;
    
//     int totalMin = A * 60 + B + C;
//     int endHour = (totalMin / 60) % 24;
//     int endMin = totalMin % 60;
//     cout << endHour << ' '<< endMin;
// }

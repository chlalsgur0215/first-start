#include <iostream>
using namespace std;
int main()
{
    int namogi[42] = {0}, count = 0, num;
    for(int i=0; i<10; i++){
        cin >> num;
        namogi[num % 42] = 1;
    }
    for(int i=0; i<42; i++){
        if(namogi[i] == 1){
            count++;
        }
    }
    cout << count;
}

//------------------------------------------------
// #include <iostream>
// using namespace std;
// int main()
// {
//     int num[10], count=0;
//     for(int i=0; i<10; i++){
//         cin >> num[i];
//     }
//     for(int i=0; i<10; i++){
//         bool ox = true;

//         for(int j=0; j<i; j++){
//             if(num[i] % 42 == num[j] % 42){
//                 ox = false;
//                 break;
//             }
//         }
//         if(ox){
//             count++;
//         }
//     }
//     cout << count;
// }

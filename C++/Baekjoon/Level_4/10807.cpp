#include <iostream>
using namespace std;
int main()
{
    int numCount, num[100], value, count=0;
    cin >> numCount;
    for (int i = 0; i < numCount; i++){
        cin >> num[i];
    }
    cin >> value;
    for(int k = 0; k < numCount; k++){
        if(num[k] == value){
            count += 1;
        }
    }
    cout << count;
}

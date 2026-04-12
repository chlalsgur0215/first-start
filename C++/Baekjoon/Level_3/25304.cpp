#include <iostream>
using namespace std;
int main()
{
    int totalPrice, totalObject, price, count, sumPrice = 0;
    cin >> totalPrice >> totalObject;
    for(int i = 0; i < totalObject; i++){
        cin >> price >> count;
        sumPrice = sumPrice + (price * count);
    }
    if(sumPrice == totalPrice){
        cout << "Yes";
    }else{
        cout << "No";
    }
}

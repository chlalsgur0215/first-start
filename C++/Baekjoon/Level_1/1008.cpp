#include <cstdio>
int main()
{
    double A, B;
    scanf("%lf %lf", &A, &B);
    printf("%.9f",A / B);
}

//C가 통합된 C++이기에 scanf, printf를 사용할 수 있음.
//조건에 10의 -9승 오차범위는 정답이기에 소수점을 더 끌어올 필요가 있었음. 때문에 소수점 조절에 더 쉬운 scanf, printf를 사용.
//포인터(*)는 주소 연산자(&)를 저장할수있는 객체. 둘이 비슷하지만 다름

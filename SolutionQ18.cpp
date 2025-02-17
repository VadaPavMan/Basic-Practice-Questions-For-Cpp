#include <iostream>
using namespace std;

int factorial(int n)
{
    int fac =1;
    for(n; n > 0; n--)
    {
        fac*= n;
    }

    return fac;
}

void nCr(int n, int r)
{
    int facN = factorial(n), facR = factorial(r), facNR = factorial(n-r);
    cout <<"Combination Calculation: "<< facN/(facR*facNR)<<endl;  // nCr binomial coeffcient for n & r
}

int main()
{
    nCr(6, 5);
    return 0;
}

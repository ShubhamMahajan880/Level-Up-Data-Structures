#include <bits/stdc++.h>
// #include <iostream>
// #include<algorithm>
// #include<climits>
// #include<string>
// #include<cctype>
// #include<vector>
// #include<set>
// #include<iomanip>
// #include<cmath>
using namespace std;

int Prod(int a, int b = 2)
{
    int theMultiplicaiton = a * b;
    return theMultiplicaiton;
}

bool isprime(int n)
{

    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % 2 == 0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
    return isprime;
}

int factorial(int c)
{
    int fact = 1;
    for (int i = 1; i <= c; i++)
    {
        fact *= i;
    }
    cout<<"Factorial of no. - "<<c<<" is - "<<fact<<endl;
    return fact;
}
int main()
{
    cout << Prod(5) << endl;     // 10 - by using default defined parametr 2 with 1 argumenet
    cout << Prod(5, 10) << endl; // 50 - by using both  parameters with both arguements
    cout << isprime(23) << endl; // 1
    cout << isprime(2) << endl;  // 1 - Prime Numbe
    cout << isprime(8) << endl;  // 0 - Not a prime number
    cout << factorial(5) << endl;//120
    factorial(10);//Factorial of no. - 10 is - 3628800
}

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
int main()
{
    // Nested Loops  & Patterns -

    /*
    1) Print the Nested Loop Pattern -
    1 1 1 1
    2 2 2 2
    3 3 3 3
    4 4 4 4
     */

    // int n;
    // cout << "n's value " << endl;
    // cin >> n;

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << i << " ";
    //     }
    //     cout << endl;
    // }

    /* O/p -

    n's value
    6
    1 1 1 1 1 1
    2 2 2 2 2 2
    3 3 3 3 3 3
    4 4 4 4 4 4
    5 5 5 5 5 5
    6 6 6 6 6 6
     */
    // ____________ ____________

    // /*  2) Print the Star Pattern
    // *
    // * *
    // * * *
    // * * * *
    // * * * * *
    //  */
    //     int n;
    //     cout << "vakue of n - " << endl;
    //     cin >> n;

    //     for (int i = 1; i <= n; i++)
    //     {
    //         for (int j = 1; j <= i; j++)
    //         {
    //             cout << "* ";
    //         }
    //         cout << endl;
    //     }
    // /*
    // 5
    // *
    // * *
    // * * *
    // * * * *
    // * * * * *
    //  */

    // ____________ ____________

    /*  3) Print the Inverted Star Pattern
* * * * * 
* * * * 
* * * 
* * 
* 
     */
    int n;
    cout << "vakue of n - " << endl;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i+1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
/* 
vakue of n - 
5
* * * * * 
* * * * 
* * * 
* * 
* 
 */    
}

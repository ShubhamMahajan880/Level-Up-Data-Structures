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
    /*
    Arrays in cpp -  Linear Collection of Same Type of ELements that are stored together in
    Contiguos Memory Spaces.
     */
    // Initliazearray without any value
    int marks[50];             // 0 to 49
    cout << marks[0] << endl;  // 4199136 - whn we don;t innitialize the array with any value it takes any garbage value in the memory
    cout << marks[1] << endl;  // 17566816
    cout << marks[2] << endl;  // 17566816
    cout << marks[50] << endl; // 4201056

    int percentage[5] = {0, 1, 2, 3, 4};
    cout << percentage << endl;
    cout << sizeof(percentage) << endl;                                          // 20 - int size = 4 bytes , so 5 int = 4*5 = 20 bytes
    cout << "lenght of array is - " << sizeof(percentage) / sizeof(int) << endl; // lenght of array is - 5

    // Ouput & input of an array -
    int arr[5] = {0, 1, 2, 3, 4};
    for (int i = 0; i < 5; i++)
    {
        cout << i << " "; // 0 1 2 3 4
    }
    cout << endl;

    int len = sizeof(arr) / sizeof(int);

    for (int idx = 0; idx <= len - 1; idx++)
    {
        cout << arr[idx] << " ";//0 1 2 3 
    }
    cout << endl;
}

// take positive integer input and tell is it is even or odd
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter number: ";
//     cin >> n;
//     if (n % 2 == 0)
//         cout << "Even number";
//     if (n % 2 != 0)
//         cout << "Odd number";
//     return 0;
// }

// 2nd mothod
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter number: ";
//     cin >> n;
//     if (n % 2 == 0)
//         cout << "Even number";
//     else
//         cout << "Odd number";
//     return 0;
// }
// tack positive integer input and tell if it is divisible by 5 or not
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter n: ";
//     cin >> n;
//     if (n % 5 == 0)
//     {
//         cout << "dividible" << "\n";
//         cout << "good";
//     }
//     else
//     {
//         cout << "not divisible" << "\n";
//         cout << "Don't worry";
//     }
//     return 0;
// }

// tack integer input and print the absolute value of the integer
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter n: ";
//     cin >> n;
//     if (n >= 0)
//     {
//         cout << n;
//     }
//     else
//     {
//         cout << -n;
//     }
//     return 0;
// }

// multipal condition using and (&&) and or(||)
// tack positive integer input and tell if it is a three digit number or not
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter n: ";
//     cin >> n;
//     if (n > 99 && n < 1000)
//     {
//         cout << "Three Digit Number";
//     }
//     else
//     {
//         cout << "not a 3 digit number";
//     }
//     return 0;
// }

// tack positive integer input and tell if it is divisible by 5 or 3
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter n: ";
//     cin >> n;
//     if (n % 5 == 0 || n % 3)
//     {
//         cout << "divisible";
//     }
//     else
//     {
//         cout << "not divisble";
//     }
//     return 0;
// }
// tack 3 numbers input and tell if theycan be side of trangle
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a, b, c;
//     cout << "enter side1:";
//     cin >> a;
//     cout << "enter side2:";
//     cin >> b;
//     cout << "enter side3:";
//     cin >> c;
//     if ((a + b) > c and (b + c) > a and (c + a) > b)
//     {
//         cout << "valid Triangle";
//     }
//     else
//     {
//         cout << "invalid Trangle";
//     }
//     return 0;
// }

// TERANARY OPERATOR(SHORT FORM OF CODE) EXAMPLE - ODD EVEVN CODE
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number: ";
    cin >> n;
    (n % 2 == 0) ? cout << "Even" : cout << "Odd";
}

// check leap year
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number: ";
    cin >> n;
    if (n % 4 == 0)
    {
        cout << "Leap year";
    }
    else
    {
        cout << "not leap year";
    }
    return 0;
}

// check whether a chracter is a vowel or consonant
#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "enter ch: ";
    cin >> ch;
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        cout << "Vowel";
    }
    else
    {
        cout << "Consonant";
    }
}
// print hello world 'n' times. tack 'n' as input from user
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter n: ";
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         cout << "hello world" << "\n";
//     }
//     return 0;
// }

// print the number 1 to 100
// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int i = 1; i <= 100; i++)
//     {
//         cout << i << "\n";
//     }
//     return 0;
// }

// print all the even numbver from i to 100
// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int i = 1; i <= 100; i++)
//     {
//         if (i % 2 == 0)
//         {
//             cout << i << "\n";
//         }
//     }
//     return 0;
// }
// method 2nd
// // for(i=2; i<=100;i=i+2) cout<<i<<"\n";

// // print all the odd number from 1 to 100
// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int i = 1; i <= 100; i++)
//     {
//         if (i % 2 != 0)
//         {
//             cout << i << "\n";
//         }
//     }
//     return 0;
// }

// print the table of 19
// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int i = 1; i <= 10; i++)
//     {
//         cout << 19 * i << "\n";
//     }
//     return 0;
// }

// Display this AP - 1,3,5,7,9.....upto 'n' terms
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "enter n: ";
//     cin >> n;
//     for (int i = 1; i <= 2 * n - 1; i += 2)
//     {
//         cout << i << "\n";
//     }

//     return 0;
// }

// diplay this Ap - 4,7,10,13,16 where a=4 d = 3 an=a+(n-1)d=3*n+1
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "enter n: ";
//     cin >> n;
//     for (int i = 4; i <= 2 * n + 1; i += 3)
//     {
//         cout << i << "\n";
//     }

//     return 0;
// }
// 2nd method
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter n: ";
//     cin >> n;
//     int a = 4;
//     for (int i = 1; i <= n; i++)
//     {
//         cout << a << "\n";
//         a = a + 3;
//     }

//     return 0;
// }

// Display this gp - 1,2,4,8,16,32....upto 'n' treams
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "enter n: ";
//     cin >> n;
//     int a = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         cout << a << "\n";
//         a = a * 2;
//     }

//     return 0;
// }

// Display this gp = 3, 12,48....
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "enter n: ";
//     cin >> n;
//     int a = 3;
//     for (int i = 1; i <= n; i++)
//     {
//         cout << a << "\n";
//         a = a * 4;
//     }

//     return 0;
// }

// WAP to finde the highest fator of a number 'n'(other than n itself)
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "enter n: ";
//     cin >> n;
//     int f = 1;
//     for (int i = 1; i < n; i++)
//     {
//         if (n % i == 0)
//             f = i;
//     }
//     cout << f;

//     return 0;
// }

// print revide order factor of n number
// #include <iostream>
// using namespace std;
// int mani()
// {
//     int n;
//     cout << "enter the number: ";
//     cin >> n;
//     for (int i = n / 2; i >= 1; i--)
//     {
//         if (n % i == 0)
//         {
//             cout << i << " ";
//             break;
//         } // to get out of the loop
//     }
//     return 0;
// }

// WAP to check  if a number is composite or not (cpmposite means -- if n has
// extra 1 & n then it is composit)
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter number: ";
//     cin >> n;
//     for (int i = 2; i <= n / 2; i++)
//     {
//         if (n % i == 0)
//         {
//             cout << i << " ";
//             break;
//         }
//     }
//     return 0;
// }

// check composite number of digit what user tack input
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n, count = 0;

//     cout << "Enter a number: ";
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             count++;
//         }
//     }

//     if (count > 2)
//     {
//         cout << n << " is a Composite Number";
//     }
//     else
//     {
//         cout << n << " is not a Composite Number";
//     }

//     return 0;
// }

// Write a program to check the number is prime or not.
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     bool prime = true;

//     cout << "Enter a number: ";
//     cin >> n;

//     if (n <= 1)
//     {
//         cout << "Not a Prime Number";
//     }
//     else
//     {
//         for (int i = 2; i <= n / 2; i++)
//         {
//             if (n % i == 0)
//             {
//                 prime = false;
//                 break;
//             }
//         }

//         if (prime)
//             cout << "Prime Number";
//         else
//             cout << "Not a Prime Number";
//     }

//     return 0;
// }

// Write a program to print a odd number from one to hundred using continue statement.
// #include <iostream>
// using namespace std;

// int main()
// {
//     for (int i = 1; i <= 100; i++)
//     {
//         if (i % 2 == 0)
//         {
//             continue;
//         }

//         cout << i << " ";
//     }

//     return 0;
// }
// sum of n number
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter n: ";
//     cin >> n;
//     int a = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         a = a + i;
//     }
//     cout << a;
//     return 0;
// }

// write to count digit of a given number
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter nuymber: ";
//     cin >> n;
//     int count = 0;
//     while (n != 0)
//     {
//         n = n / 10;
//         count++;
//     }
//     cout << count;
//     return 0;
// }
// write a program suum of digit of a given number
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter nuymber: ";
//     cin >> n;
//     int sum = 0;
//     while (n != 0)
//     {
//         int ld = n % 10;
//         n = n / 10;
//         sum += ld;
//     }
//     cout << sum;
//     return 0;
// }

// write to print product of digits of a given number
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter nuymber: ";
//     cin >> n;
//     int mul = 1;
//     while (n != 0)
//     {
//         int ld = n % 10;
//         n = n / 10;
//         mul *= ld;
//     }
//     cout << mul;
//     return 0;
// }

// Wap to print sum of all the even digit of a given number
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter a number: ";
//     cin >> n;
//     int sum = 0;
//     while (n != 0)
//     {
//         int ld = n % 10;
//         if (ld % 2 == 0)
//         {
//             sum += ld;
//         }
//         n = n / 10;
//     }
//     cout << "sumof even digits = " << sum;
//     return 0;
// }
// write a program to print reverse of a given number
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter the number: ";
//     cin >> n;
//     int r = 0;
//     while (n != 0)
//     {
//         int ld = n % 10;
//         r = r * 10 + ld;
//         n /= 10;
//     }
//     cout << "reverse: " << r;
//     return 0;
// }

// wap to print the sum of given number and its reverse
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number: ";
    cin >> n;
    int temp = n;
    int r = 0;
    while (n != 0)
    {
        int ld = n % 10;
        r = r * 10 + ld;
        n /= 10;
    }
    cout << "reverse: " << r;
    cout << "Sum= " << temp + r;
    return 0;
}

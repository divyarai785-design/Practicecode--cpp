// #include <iostream>
// using namespace std;
// int main()
// {
//     int x; // declaration
//     x = 5; // initialization
//     int y = 6;
//     cout << x + y;
//     return 0;
// } // 11

// update variable
// #include <iostream>
// using namespace std;
// int main()
// {
//     int x = 5;
//     cout << x << "\n";
//     x = 7; // update
//     cout << x << "\n";
//     x = x + 9;
//     cout << x;

//     return 0;
// }  // 5 7 16

// Arthmatic opeartor
// #include <iostream>
// using namespace std;
// int main()
// {
//     int x = 8, y = 5;
//     cout << x + y << "\n"; // 13
//     cout << x - y << "\n"; // 3
//     cout << x * y << "\n"; // 40
//     cout << x / y << "\n"; // 1 //integer do not print floating value
//     return 0;
// }

// calculating Area of a Circle using variable a= pi*r**2
// #include <iostream>
// using namespace std;
// int main()
// {
//     float r = 3.0;
//     float pi = 3.14;
//     float area = pi * r * r;
//     cout << "area is: " << area;
//     return 0;
// }

// Calculationg simple interest
// #include <iostream>
// using namespace std;
// int main()
// {
//     float p;
//     cout << "enter p: ";
//     cin >> p;
//     float r;
//     cout << "enter r: ";
//     cin >> r;
//     float t;
//     cout << "enter t: ";
//     cin >> t;
//     float si = (p * r * t) / 100;
//     cout << si;
//     return 0;
// }

// Calcilate volume of a Sphere  4/3 pi*r*r*r
// #include <iostream>
// using namespace std;
// int main()
// {
//     float r;
//     cout << "enter r: ";
//     cin >> r;
//     float volume = (4.0 / 3.0) * 3.14 * r * r * r;
//     cout << "volume: " << volume;
//     return 0;
// }

// assi values
#include <iostream>
using namespace std;
int main()
{
    char ch;
    cin >> ch;
    cout << (int)ch;
    return 0;
}
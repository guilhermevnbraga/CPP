#include <iostream>
using std::boolalpha;
using std::cout;
using std::endl;

int main()
{
    cout << "Logical AND (&&)"
         << "\nfalse && false: " << (false && false)
         << "\nfalse && true: " << (false && true)
         << "\ntrue && false: " << (false && true)
         << "\ntrue && true: " << (true && true) << "\n\n";

    cout << boolalpha << "Logica OR (||)"
         << "\nfalse || false: " << (false || false)
         << "\nfalse || true: " << (false || true)
         << "\ntrue || false: " << (true || false)
         << "\ntrue || true: " << (true || true) << "\n\n";

    cout << "Logical NOT (!)"
         << "\n!false: " << (!false)
         << "\n!true: " << (!true) << endl;
    return 0;
}

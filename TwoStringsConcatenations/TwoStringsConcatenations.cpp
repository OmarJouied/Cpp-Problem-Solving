#include <iostream>
#include <string>

using namespace std;

int main()
{
    string Quote1, Quote2;

    cout << "Please enter Quote1?\n";
    getline(cin, Quote1);

    cout << "Please enter Quote2?\n";
    getline(cin, Quote2);

    cout << Quote1 + " - " + Quote2 << endl;
    cout << "First quote length: " << Quote1.length() << endl;
    cout << "Second quote length: " << Quote2.length() << endl;
    cout << "Total characters: " << Quote1.length() + Quote2.length() << endl;

    return 0;
}

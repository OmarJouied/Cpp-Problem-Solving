#include <iostream>
using namespace std;

void addPrefix(string &text, string prefix)
{
    text = prefix + text;
}

int main()
{
    string text = "Ahmed", prefix = "Dr.";
    cout << "text: \"" << text << "\", prefix: \"" << prefix << "\"" << endl;

    addPrefix(text, prefix);

    cout << "Final text: \"" << text << "\"" << endl;
    return 0;
}

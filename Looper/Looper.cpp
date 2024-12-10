// Looper

#include <iostream>
using namespace std;

int main()
{
    char ch = 'a';
    cout << "Alphabets from 'a' to 'z' skipping 3 letters:\n";
    do
    {
        cout << ch << " ";
        ch += 4;
    } while (ch <= 'z');
    cout << endl;
    return 0;
}

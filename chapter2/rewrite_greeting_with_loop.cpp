#include <iostream>
#include <string>
// say what standard-library names we use
using std::cin;
using std::endl;
using std::cout;
using std::string;

int main()
{
    string name;
    cout << "Hi, what's your name ?" << endl;
    cin >> name;

    // Compute Greeting
    string greeting = "Hello, " + name + "!";
    cout << greeting << endl;
    //
    const int pad = 2;

    // Chose type for col_size to be able to store every value of greeting size
    const string::size_type col_size = greeting.size() + pad*2 + 2;
    // Row size ?
    const int row_size = pad*2 + 3;
    for (int r=0; r<row_size; r++)
    {
        int c=0;
        while(c!=col_size)
        {
            if ( r==pad+1 && c==pad+1)
            {
                cout << greeting; c+=greeting.size();
            }
            else
            {
                if (c==0 || c==col_size-1 || r==0 || r==row_size-1)
                {
                    cout << '*';
                }
                else
                {
                    cout << ' ';
                }
                ++c;
            }
        }
        cout << endl;
    }
    return 0;
}
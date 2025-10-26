
#include <iostream>
using namespace std;

string btos(bool x)
{
    if (x)
        return "True";
    return "False";
}


int main()
{
    
    cout << 1 << " || " << 0 << " is " << btos(1 || 0)
         << endl;
    cout << 1 << " && " << 0 << " is " << btos(1 && 0)
         << endl;

    return 0;
}

#include <iostream>
#include <cassert>
using namespace std;
#include "Dict.h"

int main()
{
    Dictionary<int, string> dict;
    dict.add(KeyValuePair<int, string>(1, "Apple"));
    // dict[1] = "Apple";
    cout << dict[1] << endl;
    dict[1] = "Banana";
    cout << dict[1] << endl;
}
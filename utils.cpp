#include <iostream>

using namespace std;

bool starts_with(string s1, string s2) {
    return s2.size() <= s1.size() && s1.compare(0, s2.size(), s2) == 0;
}

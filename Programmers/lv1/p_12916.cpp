#include <string>
#include <iostream>
using namespace std;

int pc, yc;

bool solution(string s)
{
    for(auto c : s) {
        if (c == 'p' || c== 'P') {
            pc++;
        } else if (c == 'y' || c == 'Y') {
            yc++;
        }
    }
    return pc == yc;
}
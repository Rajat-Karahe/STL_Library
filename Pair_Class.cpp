//Pair class
//For pair class we have to import a library names utility

#include <utility>
#include <iostream>
using namespace std;

int main() {
    pair<int, char> p;
    p = make_pair(1, 'a');
    pair<int, char> p2(2, 'b');
    
    cout << p.first << " " << p.second << endl;
    cout << p2.first << " " << p2.second << endl;
}

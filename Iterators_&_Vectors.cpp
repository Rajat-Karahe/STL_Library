Iterator is a pointer to element of a Range of elements of a data structure.

we create object of Iterator to point to element of a data structure in c++ stl;

Iterator is pointer so we use dereference operator to obtain value.

#include <vector>
vector<int> v; //vector class uses a template to define it before using it
//This will create an empty vector with no elements

//How to create a iterator 
vector<int>::iterator it; //Will define a iterator of type vector<int>

it = v.begin() // point to first element of vector
it = v.end() // points to next to last element of vector

#include <vector>
#include <iostream>
using namespace std;
int main() {
    vector<int> v;
    
    //Vector is dynamic array it doubles it's capacity whenever required
    for(int i=0; i<5; i++){
        v.push_back(i+1);  //don't use v[i] = i+1;
        cout << i << " Size " << v.size() << " Capacity " << v.capacity() << endl;
    }

    for(vector<int>::iterator it=v.begin(); it!=v.end(); it++){
        cout << *it << endl;
    }
}

vector<int> v(5); //will create a vector of size 5 with garbage value or 0
vector<int> v(5, 100); //will create a vector of size 5 and initialize all it's vales with 100

if vector has not been allocated size than use push_back() to insert values

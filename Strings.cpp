//A string is a character array

#include <string>
#include <iostream>
using namespace std;

int main() {
    string s = "Rajat Karahe";
    string s1(s); //copy constructor will create a string s1 with same data as of same
    
    cout << s <<  " / " << s1 << endl;
    
    string s2(s, 2, 4); //jat
    cout << s2 << endl;
    
    string s3 = s.substr(2, 5); //Start from 2 and take next 5 characters
    cout << s3 << endl;
    
    if(s1.compare(s2)){} //Compares value of two strings
    
    s.length() //length of string
}

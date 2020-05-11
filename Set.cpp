//Set cannot contain duplicate values

//It only contains keys and is used to check whether a element is present or not

//Set is generally implemented in c++ using balanced binary search Tree

//Hence find operation takes O(logN) , insert takes O(logN) time

#include <set>
#include <iostream>
using namespace std;

int main() {
    
    set<int> s;
    int arr[] = {1, 2 , 2, 1, 3, 3};
    
    for(int i=0; i<6; i++){
        s.insert(arr[i]);
    }
    
    set<int>::iterator it;
    for(it = s.begin(); it!=s.end(); it++){
        cout << *it << endl;
    }
    
    if(s.find(5) == s.end()){
        cout << "Value not found" << endl;
    }else{
        cout << "Value found" << endl;
    }
}

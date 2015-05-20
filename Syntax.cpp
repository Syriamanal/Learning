#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(){
    string mstr = ("2165165");
    int myint;
    stringstream(mstr) >> myint;
    cout << myint << endl;
}

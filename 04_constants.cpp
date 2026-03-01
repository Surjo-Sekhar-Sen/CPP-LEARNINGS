#include <iostream>
using namespace std;

int main(){
    int score; //declaration
    score = 100; //initialization

    cout << score << endl;
    
    const int id = 1234;
    id = 3456; //cannot change a constant value!!
}
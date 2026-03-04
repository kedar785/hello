#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {

    Calculator obj;

    cout << obj.add(5, 10) << endl;
    cout << obj.add(5, 10, 15) << endl;

    return 0;
}
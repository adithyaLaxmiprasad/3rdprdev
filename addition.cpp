// addition.cpp
#include <iostream>
#include <cassert>
using namespace std;

int add(int a, int b) {
    return a + b;
}

void test_add() {
    assert(add(1, 2) == 3);
    assert(add(2, 2) == 4);
    cout << "All tests passed!" << endl;
}

int main() {
    test_add();
    return 0;
}

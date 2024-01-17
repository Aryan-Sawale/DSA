#include <bits/stdc++.h>

using namespace std;

class A {
public:
    virtual void show() {
        std::cout << "A" << std::endl;
    }
};

class B : virtual public A {
public:
    // void show() override {
    //     std::cout << "B" << std::endl;
    // }
};

class C : virtual public A {
public:
    // void show() override {
    //     std::cout << "C" << std::endl;
    // }
};

class D : public B, public C {
};

int main() {
    D d;
    d.show();  // This will call the 'B' version of show
    return 0;
}

// This code is wrong, fix it later
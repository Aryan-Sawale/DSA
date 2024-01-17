/*

static variable in function:

void counter() {
    static int count = 0; // Static local variable
    count++;
    std::cout << "Count: " << count << std::endl;
}

int main() {
    counter(); // Outputs "Count: 1"
    counter(); // Outputs "Count: 2"
    return 0;
}

static member var and function:

class MyClass {
public:
    static int staticVar;
    static void staticFunc() {
        std::cout << "Static function" << std::endl;
    }
};

int MyClass::staticVar = 42;

int main() {
    std::cout << MyClass::staticVar << std::endl; // Access static variable
    MyClass::staticFunc(); // Call static function
    return 0;
}
*/
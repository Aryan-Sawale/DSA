/*
Single:

class Base {
public:
    void display() {
        cout << "Base class" << endl;
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "Derived class" << endl;
    }
};

int main() {
    Derived d;
    d.display(); // Accessing base class method
    d.show();    // Accessing derived class method
    return 0;
}

Multiple:
class Base1 {
public:
    void display1() {
        cout << "Base1 class" << endl;
    }
};

class Base2 {
public:
    void display2() {
        cout << "Base2 class" << endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    void show() {
        cout << "Derived class" << endl;
    }
};

int main() {
    Derived d;
    d.display1(); // Accessing Base1 class method
    d.display2(); // Accessing Base2 class method
    d.show();     // Accessing Derived class method
    return 0;
}

Multilevel:

class Grandparent {
public:
    void displayGrandparent() {
        cout << "Grandparent class" << endl;
    }
};

class Parent : public Grandparent {
public:
    void displayParent() {
        cout << "Parent class" << endl;
    }
};

class Child : public Parent {
public:
    void displayChild() {
        cout << "Child class" << endl;
    }
};

int main() {
    Child c;
    c.displayGrandparent(); // Accessing Grandparent class method
    c.displayParent();      // Accessing Parent class method
    c.displayChild();       // Accessing Child class method
    return 0;
}

Hierarchical:
class Animal {
public:
    void eat() {
        cout << "Animal is eating." << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking." << endl;
    }
};

class Cat : public Animal {
public:
    void meow() {
        cout << "Cat is meowing." << endl;
    }
};

int main() {
    Dog dog;
    Cat cat;
    dog.eat(); // Accessing Animal class method
    dog.bark(); // Accessing Dog class methods
    cat.eat(); // Accessing Animal class method
    cat.meow(); // Accessing Cat class method
    return 0;
}

Hybrid:
class A {
public:
    void displayA() {
        cout << "Class A" << endl;
    }
};

class B : public A {
public:
    void displayB() {
        cout << "Class B" << endl;
    }
};

class C {
public:
    void displayC() {
        cout << "Class C" << endl;
    }
};

class D : public B, public C {
public:
    void displayD() {
        cout << "Class D" << endl;
    }
};

int main() {
    D d;
    d.displayA(); // Accessing Class A method via inheritance from B
    d.displayB(); // Accessing Class B method
    d.displayC(); // Accessing Class C method
    d.displayD(); // Accessing Class D method
    return 0;
}
*/
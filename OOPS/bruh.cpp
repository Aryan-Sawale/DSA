#include <bits/stdc++.h>

using namespace std;

class Animal
{
public:
  string name;

  void cry()
  {
    cout << "Animal" << endl;
  }

  void myName()
  {
    cout << "My name is: " << name << endl;
  }
};

class Cat : public Animal
{
public:
  void myBreed()
  {
    cout << "I am a cat \n";
  }
};

class Dog : public Animal
{
public:
  void myBreed()
  {
    cout << "I am a Dog \n";
  }
};

class baby : public Cat, public Dog
{
};

int main()
{
  Animal animal1;
  animal1.cry();
  animal1.name = "Dog1";
  animal1.myName();

  Animal animal2;
  animal2.name = "Dog2";
  animal2.myName();

  Cat cat1;
  cat1.name = "cat1";
  cat1.cry();
  cat1.myBreed();
}
#include <bits/stdc++.h>

using namespace std;

class Shape
{
  private:
    int area;

  public:
    Shape()
    {
      area = 0;
    }
    Shape(int a)
    {
      area = a;
    }
    // copy constructor
    Shape(Shape& obj)
    {
      area = obj.area;
    }
    void draw()
    {
      cout << "I am a shape" << endl;
    }
    void show_area()
    {
      cout << area << endl;
    }

  protected:
    int test = 3;
    void modify_parent(int a)
    {
      test = a;
    }
};

class Circle : public Shape
{
  public:
    int area;
    Circle()
    {
      area = 0;
    }
    Circle(int a)
    {
      area = a;
    }
    void draw()
    {
      cout << "I am a Circle" <<endl;
    }

    void show_test()
    {
      modify_parent(9);
      cout << "test: " << test << endl;
    }
};

int add (int a, int b)
{
  cout << a + b;
}

int add (int a, int b, int c)
{
  cout << a + b + c;
}

int main()
{ 
  // inheritance, abstraction, encapsulation, polymorphism
  Circle circle_obj;
  Shape shape_obj(4);
  shape_obj.draw();
  circle_obj.draw();
  circle_obj.show_area();
  
  Shape copy_obj = shape_obj;
  copy_obj.show_area();

  circle_obj.show_test();
}
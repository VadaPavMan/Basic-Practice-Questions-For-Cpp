#include <iostream>
#include <string>

using namespace std;

class animal
{
public:
void eat()
{
  cout <<"This animal eats food."<<endl;
}
};

class mammal: public animal
{
public:
void walk()
{
  cout <<"This Mammal can walk."<<endl;
}
};

class dog: public mammal
{
public:
void bark()
{
  cout <<"The dog barks."<<endl;
}
};

int main()
{
  cout << "Hello World!\n";
  dog nigga;
  nigga.bark();
  nigga.walk();
  nigga.eat();

  return 0;
}

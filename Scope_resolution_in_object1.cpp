#include <iostream>
using namespace std;

class Animal {
  public:
    void make_sound() {
      cout << "Making Animal Sound" << endl;
    }
};

class Dog : public Animal {
  public:
    void make_sound() {
      cout << "Woof Woof" << endl;
    }
};

int main() {
  Dog d1;

  // access subclass function
  d1.make_sound();

  // call overridden function
  d1.Animal::make_sound();

  return 0;
}

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

      // call overridden function
      Animal::make_sound();
    }
};

int main() {
  Dog d1;
  d1.make_sound();
  return 0;
}

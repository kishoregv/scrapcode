#include <iostream>
using namespace std;

class Rectangle {
    int width, height;
  public:
    void set_values (int,int);
    int area() {return width*height;}
};

void Rectangle::set_values (int x, int y) {
  width = x;
  height = y;
}

long power (int base, int exp) {
  if (exp == 0) {
    return 1;
  } else if (exp % 2 == 0) {
    
    cout << power(base, exp / 2 ) * power(base, exp / 2) << endl; 
    return power(base, exp / 2 ) * power(base, exp / 2);
  } else {
    
    cout << base * power(base, exp / 2) * power(base, exp /2) << endl;
    return base * power(base, exp / 2) * power(base, exp /2);
  }
}

int main () {
  Rectangle rect;
  rect.set_values (3,4);
  cout << "area: " << rect.area();
  cout << endl << "2 power of 10 is equal to " << power(2, 20); 
  return 0;
}
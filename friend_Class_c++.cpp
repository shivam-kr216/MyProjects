#include <iostream>
using namespace std;
//Must be known to TWO
//before declaration of ONE.
class ONE;
class TWO
{
public:
  void print(ONE x);
};

class ONE
{
  int a, b;
  friend class TWO;
  //void print(ONE x);
public:
  ONE() : a(1), b(2) {}
  void display()
  {
    cout << "values:: " << a << "\t" << b << endl;
  }
};
void TWO::print(ONE x)
{
  cout << "a is " << x.a << endl;
  cout << "b is " << x.b << endl;
}
int main()
{
  ONE xobj;
  TWO yobj;
  yobj.print(xobj);
  xobj.display();
  return 0;
}

#include <iostream>

int f();  // forward declaration
int g();  // forward declaration

int x = f();
int y = g();

int f()
{
  std::cout << "using 'y' (which is " << y << ")\n";
  return 3*y + 7;
}

int g()
{
  std::cout << "initializing 'y'\n";
  return 5;
}

// #include <iostream>

// int f();  // forward declaration
// int g();  // forward declaration

// int& x()
// {
//   static int ans = f();
//   return ans;
// }

// int& y()
// {
//   static int ans = g();
//   return ans;
// }

// int f()
// {
//   std::cout << "using 'y' (which is " << y() << ")\n";
//   return 3*y() + 7;
// }

// int g()
// {
//   std::cout << "initializing 'y'";
//   return 5;
// }

int main()
{
   std::cout << f();
}
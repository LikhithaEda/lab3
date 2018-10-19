// Computing III (Fall 2018) -- Lab 3
// MyDynArray_user_sample.cc

#include <iostream>
#include <string>

#include "MyDynArray.h"

using namespace std;


// function to print the array
void print(const MyDynArray &a, string prefix="")
{
  cout << prefix;
  for(int i = 0; i < a.getSize(); i++)
    cout << a.get(i) << " ";
  cout << endl;
}


int main()
{

  // testing copy constructor
  
  cout << "***** Testing copy constructor *****\n";
  bool copy_constructor_failed = false;
  cout<< "test\n" << endl;
  MyDynArray a(10);
  
  print(a, "a: ");
  a.set(3, 9);
  MyDynArray b = a;
  //MyDynArray b;
  print(b, "b: ");
  b.set(-2, 9);
  print(b, "b: ");
  print(a, "a: ");

  //cout << a.get[9]<< endl;
  //cout << b.get[9]<< endl;

  if (a.get(9) == b.get(9))
    copy_constructor_failed = true;

  if (copy_constructor_failed)
    cout << "FAILED: Copy constructor\n";
  else
    cout << "PASSED: Copy constructor\n";

  // testing assignment operator
  cout << "***** Testing assignment operator *****\n";
  bool assignment_operator_failed = false;
  MyDynArray c;
  c = a;
  print(c, "c: ");
  c.set(-4, 3);
  print(c, "c: ");
  print(a, "a: ");

  if (a.get(9) != c.get(9)) 
    assignment_operator_failed = true;
  if (a.get(3) == c.get(3))
    assignment_operator_failed = true;

  if (assignment_operator_failed)
    cout << "FAILED: Assignment operator\n";
  else
    cout << "PASSED: Assignment operator\n";

  // testing constructor
  MyDynArray d1(10);
  MyDynArray d2(0);

  
  MyDynArray d3(-2);
  
  if ((d1.getSize() == 10) && (d2.getSize() == 0) && (d3.getSize() == 0))
    cout << "PASSED: constructor argument validation\n";
  else
    cout << "FAILED: constructor argument validation\n";

  return 0;
  
}

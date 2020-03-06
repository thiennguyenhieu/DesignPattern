#include "TestSingleton.h"
#include <iostream>
using namespace std;

TestSingleton::TestSingleton()
{
}

TestSingleton::~TestSingleton()
{
}

void TestSingleton::printString()
{
   cout << "!!!Hello World!!!" << endl;
}

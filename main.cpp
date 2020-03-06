#include "TestSingleton.h"

int main() {
   TestSingleton::getInstance()->printString();
   TestSingleton::releaseInstance();
	return 0;
}

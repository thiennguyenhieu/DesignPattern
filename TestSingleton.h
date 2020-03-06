#ifndef TESTSINGLETON_H_
#define TESTSINGLETON_H_

#include "TemplateSingleton.h"

class TestSingleton : public Singleton<TestSingleton>
{
   friend class Singleton<TestSingleton>;
private:
   TestSingleton();
   virtual ~TestSingleton();

public:
   void printString();
};

#endif /* TESTSINGLETON_H_ */

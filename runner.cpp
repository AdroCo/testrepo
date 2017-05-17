/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/ErrorPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    CxxTest::ErrorPrinter tmp;
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::ErrorPrinter >( tmp, argc, argv );
    return status;
}
bool suite_Test1_init = false;
#include "test/test1.h"

static Test1 suite_Test1;

static CxxTest::List Tests_Test1 = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_Test1( "test/test1.h", 2, "Test1", suite_Test1, Tests_Test1 );

static class TestDescription_suite_Test1_TestNumber1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_Test1_TestNumber1() : CxxTest::RealTestDescription( Tests_Test1, suiteDescription_Test1, 5, "TestNumber1" ) {}
 void runTest() { suite_Test1.TestNumber1(); }
} testDescription_suite_Test1_TestNumber1;

static class TestDescription_suite_Test1_TestNumber2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_Test1_TestNumber2() : CxxTest::RealTestDescription( Tests_Test1, suiteDescription_Test1, 6, "TestNumber2" ) {}
 void runTest() { suite_Test1.TestNumber2(); }
} testDescription_suite_Test1_TestNumber2;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";

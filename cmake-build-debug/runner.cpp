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
bool suite_newCxxTest_init = false;
#include "..\newCxxTest.h"

static newCxxTest suite_newCxxTest;

static CxxTest::List Tests_newCxxTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_newCxxTest( "C:/Users/hloi/CLionProjects/CSC109/CH08PLAYLISTFA23/newCxxTest.h", 24, "newCxxTest", suite_newCxxTest, Tests_newCxxTest );

static class TestDescription_suite_newCxxTest_testMyFunction : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_newCxxTest_testMyFunction() : CxxTest::RealTestDescription( Tests_newCxxTest, suiteDescription_newCxxTest, 30, "testMyFunction" ) {}
 void runTest() { suite_newCxxTest.testMyFunction(); }
} testDescription_suite_newCxxTest_testMyFunction;

static class TestDescription_suite_newCxxTest_testPushFront : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_newCxxTest_testPushFront() : CxxTest::RealTestDescription( Tests_newCxxTest, suiteDescription_newCxxTest, 49, "testPushFront" ) {}
 void runTest() { suite_newCxxTest.testPushFront(); }
} testDescription_suite_newCxxTest_testPushFront;

static class TestDescription_suite_newCxxTest_testPushBack : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_newCxxTest_testPushBack() : CxxTest::RealTestDescription( Tests_newCxxTest, suiteDescription_newCxxTest, 70, "testPushBack" ) {}
 void runTest() { suite_newCxxTest.testPushBack(); }
} testDescription_suite_newCxxTest_testPushBack;

static class TestDescription_suite_newCxxTest_testCopyContructor : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_newCxxTest_testCopyContructor() : CxxTest::RealTestDescription( Tests_newCxxTest, suiteDescription_newCxxTest, 91, "testCopyContructor" ) {}
 void runTest() { suite_newCxxTest.testCopyContructor(); }
} testDescription_suite_newCxxTest_testCopyContructor;

static class TestDescription_suite_newCxxTest_testAssignmentOperator : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_newCxxTest_testAssignmentOperator() : CxxTest::RealTestDescription( Tests_newCxxTest, suiteDescription_newCxxTest, 124, "testAssignmentOperator" ) {}
 void runTest() { suite_newCxxTest.testAssignmentOperator(); }
} testDescription_suite_newCxxTest_testAssignmentOperator;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";

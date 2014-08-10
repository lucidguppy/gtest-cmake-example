/*
 * test_doubler.cpp
 *
 *  Created on: Aug 10, 2014
 *      Author: matt
 */

#include "gtest/gtest.h"
#include "doubler.h"

class DoublerTest : public ::testing::Test {
 protected:
  DoublerTest() {

  }
  virtual ~DoublerTest() {

  }
  // If the constructor and destructor are not enough for setting up
  // and cleaning up each test, you can define the following methods:
  virtual void SetUp() {
    // Code here will be called immediately after the constructor (right
    // before each test).
  }

  virtual void TearDown() {
    // Code here will be called immediately after each test (right
    // before the destructor).
  }

  // Objects declared here can be used by all tests in the test case for Project1.
  doubler d;

};


TEST_F(DoublerTest, doublesThings) {
  int i = 3;
  int j = d.doubleValue(i);
  EXPECT_EQ(6, j);
}


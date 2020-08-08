//
// Created by Richard Crossley on 8/8/2020.
//

#include "gtest/gtest.h"
#include "SimpleCalc.h"

class SimpleCalcFixture : public ::testing::Test
{
protected:
    virtual void SetUp()
    {
        simpleCalc = new SimpleCalc();
    }

    virtual void TearDown()
    {
        delete simpleCalc;
    }

    SimpleCalc * simpleCalc;
};

TEST_F(SimpleCalcFixture, Add)
{
    simpleCalc->setANumber(10);
    simpleCalc->setBNumber(5);
    auto expectedResult = 15;
    auto testResult = simpleCalc->add();

    EXPECT_EQ(testResult, expectedResult);
}

TEST_F(SimpleCalcFixture, Subtract)
{
    simpleCalc->setANumber(10);
    simpleCalc->setBNumber(5);
    auto expectedResult = 5;
    auto testResult = simpleCalc->subtract();

    EXPECT_EQ(testResult, expectedResult);
}

TEST_F(SimpleCalcFixture, Multiply)
{
    simpleCalc->setANumber(10);
    simpleCalc->setBNumber(5);
    auto expectedResult = 50;
    auto testResult = simpleCalc->multiply();

    EXPECT_EQ(testResult, expectedResult);
}

TEST_F(SimpleCalcFixture, Divide)
{
    simpleCalc->setANumber(10);
    simpleCalc->setBNumber(5);
    auto expectedResult = 2;
    auto testResult = simpleCalc->divide();

    EXPECT_EQ(testResult, expectedResult);
}

// A test failure for demonstration purposes.
TEST_F(SimpleCalcFixture, AddFail)
{
    simpleCalc->setANumber(10);
    simpleCalc->setBNumber(5);
    auto expectedResult = 25;
    auto testResult = simpleCalc->add();

    EXPECT_EQ(testResult, expectedResult);
}

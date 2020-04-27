/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

//tests for numbersort

TEST(PracticeTest, 321sort)
{
    Practice obj;
    int first = 3;
    int second = 2;
    int third = 1;
    bool passed = false;
    obj.sortDescending(first , second, third);
    if(first == 3 && second == 2 && third == 1) {
      passed = true;
    }
    ASSERT_TRUE(passed);
}
TEST(PracticeTest, 123sort)
{
    Practice obj;
    int first = 1;
    int second = 2;
    int third = 3;
    bool passed = false;
    obj.sortDescending(first , second, third);
    if(first == 3 && second == 2 && third == 1) {
      passed = true;
    }
    ASSERT_TRUE(passed);
}
TEST(PracticeTest, 312sort)
{
    Practice obj;
    int first = 3;
    int second = 1;
    int third = 2;
    bool passed = false;
    obj.sortDescending(first , second, third);
    if(first == 3 && second == 2 && third == 1) {
      passed = true;
    }
    ASSERT_TRUE(passed);
}
TEST(PracticeTest, 213sort)
{
    Practice obj;
    int first = 2;
    int second = 1;
    int third = 3;
    bool passed = false;
    obj.sortDescending(first , second, third);
    if(first == 3 && second == 2 && third == 1) {
      passed = true;
    }
    ASSERT_TRUE(passed);
}
TEST(PracticeTest, 231sort)
{
    Practice obj;
    int first = 2;
    int second = 3;
    int third = 1;
    bool passed = false;
    obj.sortDescending(first , second, third);
    if(first == 3 && second == 2 && third == 1) {
      passed = true;
    }
    ASSERT_TRUE(passed);
}
TEST(PracticeTest, 132sort)
{
    Practice obj;
    int first = 1;
    int second = 3;
    int third = 2;
    bool passed = false;
    obj.sortDescending(first , second, third);
    if(first == 3 && second == 2 && third == 1) {
      passed = true;
    }
    ASSERT_TRUE(passed);
}
TEST(PracticeTest, allNegSort)
{
    Practice obj;
    int first = -3;
    int second = -1;
    int third = -2;
    bool passed = false;
    obj.sortDescending(first , second, third);
    if(first == -1 && second == -2 && third == -3) {
      passed = true;
    }
    ASSERT_TRUE(passed);
}
TEST(PracticeTest, 111sort)
{
    Practice obj;
    int first = 1;
    int second = 1;
    int third = 1;
    bool passed = false;
    obj.sortDescending(first , second, third);
    if(first == 1 && second == 1 && third == 1) {
      passed = true;
    }
    ASSERT_TRUE(passed);
}
TEST(PracticeTest, 1negSort)
{
    Practice obj;
    int first = -3;
    int second = 1;
    int third = 2;
    bool passed = false;
    obj.sortDescending(first , second, third);
    if(first == 2 && second == 1 && third == -3) {
      passed = true;
    }
    ASSERT_TRUE(passed);
}

//commit3




//tests for palindrome
TEST(PracticeTest, is_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("aa");
    ASSERT_TRUE(actual);
}
//New tests for malindrome




TEST(PracticeTest, isShortPalindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("gg");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, notShortPalindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("gh");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, isLargePalindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("racecar");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, notLargePalindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("notapalindrome");
    ASSERT_FALSE(actual);
}
//submit 1

//additional tests for palindrome
TEST(PracticeTest, empty)
{
    Practice obj;
    bool actual = obj.isPalindrome("");
    ASSERT_TRUE(actual);
}
TEST(PracticeTest, singleLetterWord)
{
    Practice obj;
    bool actual = obj.isPalindrome("f");
    ASSERT_TRUE(actual);
}
TEST(PracticeTest, palindromeWithSpace)
{
    Practice obj;
    bool actual = obj.isPalindrome("race car");
    ASSERT_FALSE(actual);
}
//commit2


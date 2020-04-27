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

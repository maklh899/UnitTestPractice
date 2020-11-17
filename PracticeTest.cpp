/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

#include <iostream>
using namespace std;

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
    bool actual = obj.isPalindrome("Racecar");
    ASSERT_TRUE(actual);
}

// Examples of a Sad Test Case
TEST(PracticeTest, symbol_notpalindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome(";+");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, symbol_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("{+;};+{");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, empty_string_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, number_string_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("123321");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, number_string_notpalindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("123897321");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, number_string_false_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("123897321");
    ASSERT_FALSE(actual);
}
 

TEST(PracticeTest, ascending_is_descending)
{
    Practice obj;
    int first= 1, second=43, third=85;
    obj.sortDescending(first, second, third);
    ASSERT_GT(first, second);
    ASSERT_GT(second, third);
    ASSERT_GT(first, third);
    cout<<first<<", "<<second<<", "<<third<<endl;
}

//second, first, third
TEST(PracticeTest, stf_is_descending)
{
    Practice obj;
    int first= 43, second=1, third=85;
    obj.sortDescending(first, second, third);
    ASSERT_GT(first, second);
    ASSERT_GT(second, third);
    ASSERT_GT(first, third);
    cout<<first<<", "<<second<<", "<<third<<endl;
}

TEST(PracticeTest, fts_is_descending)
{
    Practice obj;
    int first= 85, second=1, third=43;
    obj.sortDescending(first, second, third);
    ASSERT_GT(first, second);
    ASSERT_GT(second, third);
    ASSERT_GT(first, third);
}

TEST(PracticeTest, tfs_is_descending)
{
    Practice obj;
    int first= 1, second=85, third=43;
    obj.sortDescending(first, second, third);
    ASSERT_GT(first, second);
    ASSERT_GT(second, third);
    ASSERT_GT(first, third);
} 

TEST(PracticeTest, sft_is_descending)
{
    Practice obj;
    int first= 43, second=85, third=1;
    obj.sortDescending(first, second, third);
    ASSERT_GT(first, second);
    ASSERT_GT(second, third);
    ASSERT_GT(first, third);
}
TEST(PracticeTest, descending_is_descending)
{
    Practice obj;
    int first= 85, second=64, third=1;
    obj.sortDescending(first, second, third);
    ASSERT_GT(first, second);
    ASSERT_GT(second, third);
    ASSERT_GT(first, third);
    cout<<first<<", "<<second<<", "<<third<<endl;
}


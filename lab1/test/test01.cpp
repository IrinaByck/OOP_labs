#include <gtest/gtest.h>
#include "../include/turkish.h"

TEST(test_01, basic_test_set)
{
    ASSERT_TRUE(convertNumberToTurkish(1)=="bir");
}

TEST(test_02, basic_test_set)
{
    ASSERT_TRUE(convertNumberToTurkish(13)=="on üç");
}

TEST(test_03, basic_test_set)
{
    ASSERT_TRUE(convertNumberToTurkish(27)=="yirmi yedi");
}

TEST(test_04, basic_test_set)
{
    ASSERT_TRUE(convertNumberToTurkish(38)=="otuz sekiz");
}

TEST(test_05, basic_test_set)
{
    ASSERT_TRUE(convertNumberToTurkish(77)=="yetmiş yedi");
}

TEST(test_06, basic_test_set)
{
    ASSERT_TRUE(convertNumberToTurkish(94)=="doksan dört");
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

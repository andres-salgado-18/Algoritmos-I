#include "../baldosasDelPiso.h"
#include "gtest/gtest.h"

// Escribir tests aca:
TEST(BaldosasDelPiso, MNDivisiblesB){
    int result = baldosasDelPiso(6, 12, 3);
    EXPECT_EQ(result, 8);
}

TEST(BaldosasDelPiso, MDivisibleB){
    int result = baldosasDelPiso(12, 7, 4);
    EXPECT_EQ(result, 7);
}

TEST(BaldosasDelPiso, NDivibleB){
    int result = baldosasDelPiso(4, 6, 3);
    EXPECT_EQ(result, 4);
}

TEST(BaldosasDelPiso, BDivNull){
    int result = baldosasDelPiso(4, 5, 3);
    EXPECT_EQ(result, 4);
}


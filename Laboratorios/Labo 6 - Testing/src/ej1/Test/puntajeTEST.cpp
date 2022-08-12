#include "../puntaje.h"
#include "gtest/gtest.h"

// Escribir tests aca:
TEST(puntajeTest, bMenor10ynoDiv3){
    int b = 7;
    int resExpected = 2*b - 10;
    int result = puntaje(b);
    EXPECT_EQ(resExpected,result);
}

TEST(puntajeTest, bMenor10yDiv3){
    int b = 9;
    int resExpected = 2*b + 10;
    int result = puntaje(b);
    EXPECT_EQ(resExpected,result);
}

TEST(puntajeTest, bMayor10ynoDiv3){
    int b = 11;
    int resExpected = b - 10;
    int result = puntaje(b);
    EXPECT_EQ(resExpected,result);
}

TEST(puntajeTest, bMayor10yDiv3){
    int b = 12;
    int resExpected = b + 10;
    int result = puntaje(b);
    EXPECT_EQ(resExpected,result);
}


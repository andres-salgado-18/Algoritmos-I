#include "../llenarTaxis.h"
#include "gtest/gtest.h"

// Escribir tests aca:
TEST(LlenarTaxiTest, MismosG_Version1){

    int resExpected = 2;
    EXPECT_EQ(resExpected,llenarTaxis1(1,1,1));
}

TEST(LlenarTaxiTest, MismosG_Version2){

int resExpected = 2;
EXPECT_EQ(resExpected,llenarTaxis2(1,1,1));
}


TEST(LlenarTaxiTest, MismosG_Version3){

int resExpected = 2;
EXPECT_EQ(resExpected,llenarTaxis3(1,1,1));
}

//Desde acá hago solo tests para la versión 3: (no funciona el v3 para impares iguales) pero los anteriores no consideran casos.

TEST(LlenarTaxiTest, MismosGPar){

    int resExpected = 3;
    EXPECT_EQ(resExpected,llenarTaxis3(2,2,2));
}

TEST(LlenarTaxiTest, g2Par){
    int resExpected = 2;
    EXPECT_EQ(resExpected, llenarTaxis3(1,2,1));
}

TEST(LlenarTaxiTest, g2ImparCondicion1){
    int resExpected = 3;
    EXPECT_EQ(resExpected, llenarTaxis3(3,3,1));
}

TEST(LlenarTaxiTest, g2ImparCondicion2){
    int resExpected = 2;
    EXPECT_EQ(resExpected, llenarTaxis3(4,3,1));
}
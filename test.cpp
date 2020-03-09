#include "Vector3D.h"
#include <gtest/gtest.h>
#include <math.h>

namespace {
	
	
// TEST FOR DOT PRODUCT
	
TEST(DotProductTest,perpendicular){	
	Vector3D a (1,0,0);
	Vector3D b (0,1,0);
	EXPECT_FLOAT_EQ(0, a.DotProduct(b));	
}

TEST(DotProductTest,paralell){	
	Vector3D a (1,2,3);
	Vector3D b (2,4,6);
	EXPECT_FLOAT_EQ(28, a.DotProduct(b));	
}

TEST(DotProductTest,General){	
	Vector3D a (1,2.2,3);
	Vector3D b (1.1,4,6.2);
	EXPECT_FLOAT_EQ(28.5, a.DotProduct(b));	
}
// TESTS FOR CROSS PRODUCT

TEST(CrossProductTest,paralell){	
	Vector3D a (1,0,0);
	Vector3D b (2,0,0);

	//Calculate cross product
	float cross [] = {0,0,0};
	a.CrossProduct(b,cross);
	
	EXPECT_FLOAT_EQ(0,cross[0]);
	EXPECT_FLOAT_EQ(0,cross[1]);
	EXPECT_FLOAT_EQ(0,cross[2]);
	
}
	
TEST(CrossProductTest,perpendicular){	
	Vector3D a (1,0,0);
	Vector3D b (0,1,0);

	//Calculate cross product
	float cross [] = {0,0,0};
	a.CrossProduct(b,cross);
	
	EXPECT_FLOAT_EQ(0,cross[0]);
	EXPECT_FLOAT_EQ(0,cross[1]);
	EXPECT_FLOAT_EQ(1,cross[2]);
	
}
		


TEST(CrossProductTest,perpendicular_with_45_degrees){	
	Vector3D a (1,1,0);
	Vector3D b (0,1,0);

	//Calculate cross product
	float cross [] = {0,0,0};
	a.CrossProduct(b,cross);
	
	EXPECT_FLOAT_EQ(0,cross[0]);
	EXPECT_FLOAT_EQ(0,cross[1]);
	EXPECT_FLOAT_EQ(1,cross[2]);
	
}

TEST(CrossProductTest,General){	
	Vector3D a (1.3,1.5,2.7);
	Vector3D b (0,1.4,0.2);

	//Calculate cross product
	float cross [] = {0,0,0};
	a.CrossProduct(b,cross);
	
	EXPECT_FLOAT_EQ(-3.48,cross[0]);
	EXPECT_FLOAT_EQ(-0.26,cross[1]);
	EXPECT_FLOAT_EQ(1.82,cross[2]);
	
}
		
}

int main(int argc, char **argv) {
	
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    
}

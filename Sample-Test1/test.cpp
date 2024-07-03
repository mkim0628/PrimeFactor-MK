#include "pch.h"
#include "../TDD_price_factor/prime_factors.cpp"

using namespace std;
#include <vector>

class PrimeFactorsFixture : public testing::Test {
public:
	PrimeFactor prime_factor;
	vector<int> expected = {};

};

TEST_F(PrimeFactorsFixture, Of1) {
	expected = {};
	EXPECT_EQ(expected, prime_factor.of(1));
}

TEST_F(PrimeFactorsFixture, Of2) {
	expected = {2};
	EXPECT_EQ(expected, prime_factor.of(2));
}

TEST_F(PrimeFactorsFixture, Of3) {
	expected = { 3 };
	EXPECT_EQ(expected, prime_factor.of(3));
}

TEST_F(PrimeFactorsFixture, Of4) {
	expected = { 2, 2 };
	EXPECT_EQ(expected, prime_factor.of(4));
}

TEST_F(PrimeFactorsFixture, Of6) {
	expected = { 2, 3 };
	EXPECT_EQ(expected, prime_factor.of(6));
}

TEST_F(PrimeFactorsFixture, Of9) {
	expected = { 3, 3 };
	EXPECT_EQ(expected, prime_factor.of(9));
}

TEST_F(PrimeFactorsFixture, Of12) {
	expected = { 2, 2, 3 };
	EXPECT_EQ(expected, prime_factor.of(12));
}

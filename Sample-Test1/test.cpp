#include "pch.h"
#include "../TDD_price_factor/prime_factors.cpp"

using namespace std;
#include <vector>

TEST(PriceFactors, Of1) {
	PrimeFactor pf;
	vector<int> expected = {};
	EXPECT_EQ(expected, pf.of(1));
}

TEST(PriceFactors, Of2) {
	PrimeFactor pf;
	vector<int> expected = {2};
	EXPECT_EQ(expected, pf.of(2));
}

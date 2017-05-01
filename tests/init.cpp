#include <complex.hpp>
#include <catch.hpp>

SCENARIO("matrix init", "[init]") 
{
	Matrix matrix;
	REQUIRE(matrix.line() == 0);
	REQUIRE(matrix.column() == 0);
}

SCENARIO("matrix with params", "[init]") {
	Matrix matrix(2,3);
	REQUIRE(matrix.line() == 2);
	REQUIRE(matrix.column() == 3);
	for (int i = 0; i < matrix.line(); ++i)
		for (int j = 0; j < matrix.column(); ++j)
			REQUIRE(matrix[i][j] == 0;
}

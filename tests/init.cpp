#include <quickSort.hpp>
#include <catch.hpp>

SCENARIO("quickSort") 
{
	int a[3][3];
	for (int i = 0; i < 3; ++i)
		for (int j = 0; j < 3; ++j)
			a[i][j] = 3 - i - j;
	for (int i = 0; i < 3; ++i)
		quickSort(&a[i][0], &a[i][2]);
	REQUIRE(a[0][0] == 1); REQUIRE(a[0][1] == 2); REQUIRE(a[0][2] == 3);
	REQUIRE(a[1][0] == 0); REQUIRE(a[1][1] == 1); REQUIRE(a[1][2] == 2);
	REQUIRE(a[2][0] == -1); REQUIRE(a[2][1] == 0); REQUIRE(a[2][2] == 1);
}

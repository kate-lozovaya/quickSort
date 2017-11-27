#include <iostream>
using namespace std;

template <typename Iterator>
void quickSort(Iterator left, Iterator right)
{
	Iterator i = left;
	Iterator j = right;
	Iterator f = right;
	while (i <= j)
	{
		while (*i < *f) i++;
		while (*j > *f) j--;
		if (i <= j)
		{
			swap(*i, *j);
			i++;
			j--;
		}
	} 
	if (left < j) quickSort(left, j);
	if (right > i) quickSort(i, right);
}

#include <ctest.h>
#include "deposit.h"

CTEST(calc, )
{
    // Given
    const int day = 366;
    const int summa = 2;

    // When
    const int result = check(day, summa);

    // Then
    const int expected = -1;
    ASSERT_EQUAL(expected, result);
}

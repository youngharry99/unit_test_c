#include "unit_test.h"

int test_001()
{
    int a = 2 + 2;
    ASSERT(a == 4, "A equal 4!");
    return 0;
}

int test_002()
{
    int b = 2 + 2;
    ASSERT(b == 5, "B equal 5!");
    return 0;
}


int main()
{
    RUN_TEST(test_001);
    RUN_TEST(test_002);
    return 0;
}
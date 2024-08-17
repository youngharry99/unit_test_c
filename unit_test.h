#ifndef __UNIT_TEST_H
#define __UNIT_TEST_H

#include <stdio.h>

#define COLOR_GREEN "\033[0;32m"
#define COLOR_RED "\033[0;31m"
#define COLOR_RESET "\033[0m"

static int TESTS_PASSED = 0;
static int TESTS_FAILED = 0;


#define ASSERT(test, message) do { \
    if (!(test)) { \
        printf(COLOR_RED "[FAILED] %s\n" COLOR_RESET, message); \
        return 1; \
    } else { \
        printf(COLOR_GREEN "[PASSED] %s\n" COLOR_RESET, message); \
    } \
} while (0)


#define RUN_TEST(test) do { \
    int result = test(); \
    if (result != 0) { \
        printf(COLOR_RED "[TEST FAILED] %s\n" COLOR_RESET, #test); \
        TESTS_FAILED++; \
    } else { \
        printf(COLOR_GREEN "[TEST PASSED] %s\n" COLOR_RESET, #test); \
        TESTS_PASSED++; \
    } \
} while (0)

#endif
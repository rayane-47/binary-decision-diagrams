#include <iostream>
#include "util.hpp"
#include <assert.h>
#include <stddef.h>
int main()
{
    // Test the decomposition function.
    std::vector<bool> result;
    decomposition(38, result);
    std::vector<bool> expected = {0, 1, 1, 0, 0, 1};
    assert(result == expected);
    // Test the completion function.
    std::vector<bool> v = {1, 0, 1, 1};
    std::vector<bool> result2;
    completion(v, result2, 6);
    std::vector<bool> expected2 = {1, 0, 1, 1, 0, 0};
    assert(result2 == expected2);
    // Test the table function.
    std::vector<bool> result3;
    std::vector<bool> result4;
    std::vector<bool> expected3 = {0, 1, 1, 0, 0, 1, 0, 0};
    table(38, 8, result3, result4);
    assert(result3 == expected);
    assert(result4 == expected3);
    std::cout << "All tests passed!" << std::endl;
    return 0;
}
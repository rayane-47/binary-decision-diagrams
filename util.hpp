#pragma once
#include <vector>
#include <stddef.h>

// A function that returns a vector of booleans representing the binary decomposition of a number.
void decomposition(int n, std::vector<bool> &result);

// A function that returns a vector of booleans representing the completion of a vector of booleans.
void completion(const std::vector<bool> &v, std::vector<bool> &result, int n);

void table(int x, int n, std::vector<bool> &_decomposition, std::vector<bool> &_completion);
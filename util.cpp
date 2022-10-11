#include "util.hpp"

void decomposition(int n, std::vector<bool> &result)
{
    while (n > 0)
    {
        result.push_back(n % 2 == 1);
        n /= 2;
    }
}

void completion(const std::vector<bool> &v, std::vector<bool> &result, int n)
{
    // Write the n first elements in v in result.
    size_t i(0);
    for (i = 0; i < n && i < v.size(); ++i)
    {
        result.push_back(v[i]);
    }
    for (; i < n; ++i)
    {
        result.push_back(false);
    }
}

void table(int x, int n, std::vector<bool> &_decomposition, std::vector<bool> &_completion)
{
    decomposition(x, _decomposition);
    completion(_decomposition, _completion, n);
}
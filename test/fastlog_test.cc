#include "gtest/gtest.h"
#include <vector>
#include "rangequery/fastlog.h"

// TestOneSixteen tests the log base 2 of integers from 1 to 16 for a fast
// log implementation.
TEST(FastLog, TestOneSixteen) {
    std::vector<int> inputs{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    std::vector<int> answer{0,1,1,2,2,2,2,3,3, 3, 3, 3, 3, 3, 3, 4};
    for (int i = 0; i < answer.size(); ++i) {
        auto output = fast_log2(inputs[i]);
        ASSERT_EQ(output, answer[i]);
    }
}

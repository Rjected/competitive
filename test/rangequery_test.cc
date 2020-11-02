#include <limits>
#include "gtest/gtest.h"
#include "rangequery/rangequery.h"

TEST(RangeQuerySuite, TestSimpleQuery) {
    auto input_vector = std::vector<int> {0, 1, 2, 3, 4, 5};
    auto summator = RangeSummator<int>(input_vector);
    auto range_output = summator.sum_range(1, 3);
    ASSERT_TRUE(range_output.ok());
    ASSERT_EQ(*range_output, 6);
}

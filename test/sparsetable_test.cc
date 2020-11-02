#include <limits>
#include "gtest/gtest.h"
#include "rangequery/sparsetable.h"

// TestSingleMin tests a simple single query
TEST(SparseTable, TestSingleMin) {
    auto input_vector = std::vector<int> {8, 3, 1, 2, 5, 12, 4, 3, 10};
    auto sparsetable = SparseTable<int>(input_vector);
    auto range_output = sparsetable.min_range(1, 3);
    ASSERT_TRUE(range_output.ok());
    ASSERT_EQ(*range_output, 1);
}

// TestSingleMin tests multiple queries
TEST(SparseTable, TestMultipleMin) {
    auto input_vector = std::vector<int> {8, 3, 1, 2, 5, 12, 4, 3, 10};
    auto sparsetable = SparseTable<int>(input_vector);
    auto range_output = sparsetable.min_range(1, 3);
    ASSERT_TRUE(range_output.ok());
    ASSERT_EQ(*range_output, 1);
    range_output = sparsetable.min_range(3, 4);
    ASSERT_TRUE(range_output.ok());
    ASSERT_EQ(*range_output, 2);
    range_output = sparsetable.min_range(0, 1);
    ASSERT_TRUE(range_output.ok());
    ASSERT_EQ(*range_output, 3);
    range_output = sparsetable.min_range(0, 0);
    ASSERT_TRUE(range_output.ok());
    ASSERT_EQ(*range_output, 8);
    range_output = sparsetable.min_range(5, 8);
    ASSERT_TRUE(range_output.ok());
    ASSERT_EQ(*range_output, 3);
}

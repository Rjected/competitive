#include "rangequery.h"

template<typename T>
RangeSummator<T>::RangeSummator(std::vector<T> container) {
    range_container = container;
    for (int i = 1; i <= (int)range_container.size(); ++i) {
        range_container[i] += range_container[i-1];
    }
}

template <typename T>
absl::StatusOr<T> RangeSummator<T>::sum_range(int start, int end) {
    if (end < start) {
        return absl::Status(absl::InvalidArgumentError("End value is less than start value."));
    }
    if (start == 0) {
        return absl::StatusOr<T>(this->range_container[end]);
    }
    return absl::StatusOr<T>(this->range_container[end] - this->range_container[start-1]);
}

template class RangeSummator<int64_t>;
template class RangeSummator<int>;

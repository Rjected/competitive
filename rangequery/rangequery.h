#ifndef RANGEQUERY_H
#define RANGEQUERY_H
#include <vector>
#include "absl/status/statusor.h"

template <typename T>
class RangeSummator {
    private:
        std::vector<T> range_container;

    public:
        RangeSummator(std::vector<T> container);

        absl::StatusOr<T> sum_range(int start, int end);
};
#endif // _RANGEQUERY_RANGEQUERY_RANGEQUERY_H_

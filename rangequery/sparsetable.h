#ifndef SPARSETABLE_H
#define SPARSETABLE_H
#include <vector>
#include "absl/status/statusor.h"

template <typename T>
class SparseTable {
    private:
        std::vector<std::vector<T>> sparse_table;

    public:
        SparseTable(std::vector<T> container);

        absl::StatusOr<T> min_range(int start, int end);
};
#endif // _RANGEQUERY_RANGEQUERY_SPARSETABLE_H_

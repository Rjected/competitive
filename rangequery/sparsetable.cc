#include "fastlog.h"
#include "sparsetable.h"

template<typename T>
SparseTable<T>::SparseTable(std::vector<T> container) {
    sparse_table.push_back(std::vector<T>());
    sparse_table[0] = container;

    // this should iterate from 1 to logn
    for (int j = 1; (1 << j)+1 < (int)container.size(); ++j) {
        // if we have an array of size 2^n that we would like to find the
        // minimum of, we can find it my taking the min of the two arrays
        // which split the array in half
        // note: (1 << j) represents the size of the window that we are
        // considering

        // make sure we have an array at that point and copy previous
        sparse_table.push_back(std::vector<T>());
        sparse_table[j] = sparse_table[j-1];

        // take the min of the two halves for each element
        for (int i = 0; i <= (int)sparse_table[j-1].size(); ++i) {
            sparse_table[j][i] = std::min(sparse_table[j-1][i], sparse_table[j-1][i + (1 << (j-1))]);
        }
    }
}

template <typename T>
absl::StatusOr<T> SparseTable<T>::min_range(int start, int end) {
    if (end < start) {
        return absl::Status(absl::InvalidArgumentError("End value is less than start value."));
    }
    // given min of array from [start, start+1], [start, start+2], ..., [start, start+2^i]
    // and array from [end-1, end], ..., [end-2^i, end], we can find the min for [start, end].
    // to find this 2^i we calculate floor(log(end-start)).
    if (start == end) {
        return absl::StatusOr<T>(this->sparse_table[0][start]);
    }

    // we should ensure that this is the floor of the log2(end-start) so that
    // end-window_size > 0 is true.
    uint32_t window_size = fast_log2(end-start);
    int left_min = this->sparse_table[window_size][start];
    int right_min = this->sparse_table[window_size][end - window_size];
    return absl::StatusOr<T>(std::min(left_min, right_min));
}

template class SparseTable<int64_t>;
template class SparseTable<int>;

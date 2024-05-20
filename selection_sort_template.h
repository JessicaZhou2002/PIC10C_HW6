#ifndef SELECTION_SORT_TEMPLATE_H
#define SELECTION_SORT_TEMPLATE_H

#include <functional>

template <typename Iterator, typename Compare = std::less<>>
void selection_sort(Iterator first, Iterator last, Compare comp = Compare()) {
    for (auto it = first; it != last; ++it) {
        auto min = it;
        for (auto it2 = std::next(it); it2 != last; ++it2) {
            if (comp(*it2, *min)) {
                min = it2;
            }
        }
        if (min != it) {
            std::iter_swap(it, min);
        }
    }
}

#endif // SELECTION_SORT_TEMPLATE_H
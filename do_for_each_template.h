#ifndef DO_FOR_EACH_TEMPLATE_H
#define DO_FOR_EACH_TEMPLATE_H

#include <iostream>


template<typename Functor, typename... Args>
void do_for_each(Functor&& func, Args&&... args) {
    (func(std::forward<Args>(args)), ...);
}


template<typename... Args>
void print(Args&&... args) {
    ((std::cout << std::forward<Args>(args) << ' '), ...);
    std::cout << std::endl;
}

#endif 
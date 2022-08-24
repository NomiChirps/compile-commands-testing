#ifndef FOO_H_
#define FOO_H_

#include <iostream>

void foo();

inline void bar() { std::cout << "Goodbye!\n"; }

#endif // FOO_H_

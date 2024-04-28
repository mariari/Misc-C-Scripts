//
// Created by katyusha on 2023/7/9.
//

#include "this.h"

namespace This {
    foo::foo(int len) : len(len) {}

    // Nothing interesting here
    int foo::getLen() const {
        return len;
    }

    foo *foo::weirdPointer() {
        return this;
    }

    foo::~foo() {

    }


} // This

#include <iostream>

int foo_main() {
    This::foo foo = This::foo(3);
    This::foo *pFoo = foo.weirdPointer();
    std::cout << "Hello, World!\n" << pFoo << "\n" << pFoo->getLen() << std::endl;
    return 0;
}

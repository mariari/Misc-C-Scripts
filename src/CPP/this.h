//
// Created by katyusha on 2023/7/9.
//

#ifndef MISC_C_SCRIPTS_THIS_H
#define MISC_C_SCRIPTS_THIS_H

namespace This {

    class foo {
    public:
        explicit foo(int len);

        int getLen() const;

        virtual ~foo();

        foo *weirdPointer();

    private:
        int len;

    };

} // This

int foo_main();

#endif //MISC_C_SCRIPTS_THIS_H

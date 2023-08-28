#include "assert_macro.h"

int test_addvalues_zero() {
    int err_code = 0;
    assertEqual (0+0 == 0);
    assertEqual ((-5)+5 == 0);
    return err_code;
}

int main() {
    return test_addvalues_zero();
}
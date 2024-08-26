#include "assert_macro.h"
#include "../calc_lib.h"

int test_addvalues_zero() {
    int err_code = 0;
    assertEqual (add_values(0, 0) == 0);
    assertEqual (add_values(-5, 5) == 0);
    return err_code;
}

int main() {
    return test_addvalues_zero();
}
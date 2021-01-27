#include "assert_macro.h"

int test_addvalues_negpos() {
    int err_code = 0;
    assertEqual ((-5)+10 == 5);
    assertEqual ((-10)+5 == -5);
    assertEqual (5+(10) == 5); //test to fail
    return err_code;
}

int main() {
    return test_addvalues_negpos();
}

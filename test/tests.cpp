#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MAIN
#include <boost/test/unit_test.hpp>
#include "../calc.h"


BOOST_AUTO_TEST_SUITE(my_testsuite)

BOOST_AUTO_TEST_CASE(addvalues_zero)
        {
                BOOST_CHECK_EQUAL (add_values(0,0) , 0);
                BOOST_CHECK_EQUAL (add_values(-5,5) , 0);
        }


BOOST_AUTO_TEST_CASE(addvalues_negpos)
        {
                BOOST_CHECK_EQUAL (add_values(-5,10) ,5);
        BOOST_CHECK_EQUAL (add_values(-10,5) , -5);
        BOOST_CHECK_EQUAL (add_values(5,-10) , -5);
        }

BOOST_AUTO_TEST_SUITE_END()
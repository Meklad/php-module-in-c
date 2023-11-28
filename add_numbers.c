#include "php.h"

PHP_FUNCTION(add_numbers) {
    long a, b, result;

    if (zend_parse_parameters(ZEND_NUM_ARGS(), "ll", &a, &b) == FAILURE) {
        RETURN_NULL();
    }

    result = a + b;
    RETURN_LONG(result);
}

ZEND_BEGIN_ARG_INFO(arginfo_add_numbers, 0)
    ZEND_ARG_INFO(0, first)
    ZEND_ARG_INFO(0, second)
ZEND_END_ARG_INFO()

const zend_function_entry add_numbers_functions[] = {
    PHP_FE(add_numbers, arginfo_add_numbers)
    PHP_FE_END
};

zend_module_entry add_numbers_module_entry = {
    STANDARD_MODULE_HEADER,
    "add_numbers",
    add_numbers_functions,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    "1.0",
    STANDARD_MODULE_PROPERTIES
};

ZEND_GET_MODULE(add_numbers)


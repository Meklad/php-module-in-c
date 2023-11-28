dnl config.m4 for extension add_numbers

PHP_ARG_ENABLE(add_numbers, whether to enable add_numbers support,
[  --enable-add_numbers           Enable add_numbers support])

if test "$PHP_ADD_NUMBERS" = "yes"; then
    PHP_NEW_EXTENSION(add_numbers, add_numbers.c, $ext_shared)
fi


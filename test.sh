#!/bin/bash

rm -f result_ft_*.txt result_lib_*.txt diff.txt

echo -e "\nFT_PRINTF TESTS\n"
echo -e "Signed conversions (d, i)\n"

echo -e -n "\tSigned int (basic): "

gcc main.c ../libftprintf.a -I.. -D SIGNED_BASIC -g -Wall -Wextra -Werror -o test.out && ./test.out >> result_ft_signedbasic.txt
gcc main.c ../libftprintf.a -I.. -D SIGNED_BASIC -D PRINTF_ON -g -Wall -Wextra -Werror -o test1.out && ./test1.out >> result_lib_signedbasic.txt

if diff result_ft_signedbasic.txt result_lib_signedbasic.txt >> diff.txt ; then
	echo -e "\033[1;32mOK\033[0m" && echo "Signed int (basic): No Diff" >> diff.txt
else
	echo -e "\033[1;31mKO\033[0m"
fi

echo -e -n "\tSigned int (bonus flags): "

gcc main.c ../libftprintf.a -I.. -D SIGNED_BONUS_FLAGS -g -Wall -Wextra -Werror -o test.out && ./test.out >> result_ft_signedbonus1.txt
gcc main.c ../libftprintf.a -I.. -D SIGNED_BONUS_FLAGS -D PRINTF_ON -g -Wall -Wextra -Werror -o test1.out && ./test1.out >> result_lib_signedbonus1.txt

if diff result_ft_signedbonus1.txt result_lib_signedbonus1.txt >> diff.txt ; then
	echo -e "\033[1;32mOK\033[0m" && echo "Signed int (bonus flags): No Diff" >> diff.txt
else
	echo -e "\033[1;31mKO\033[0m"
fi

echo -e -n "\tSigned int (bonus length): "

gcc main.c ../libftprintf.a -I.. -D SIGNED_BONUS_LENGTH -g -Wall -Wextra -Werror -o test.out && ./test.out >> result_ft_signedbonus2.txt
gcc main.c ../libftprintf.a -I.. -D SIGNED_BONUS_LENGTH -D PRINTF_ON -g -Wall -Wextra -Werror -o test1.out && ./test1.out >> result_lib_signedbonus2.txt

if diff result_ft_signedbonus2.txt result_lib_signedbonus2.txt >> diff.txt ; then
	echo -e "\033[1;32mOK\033[0m" && echo "Signed int (bonus length): No Diff" >> diff.txt
else
	echo -e "\033[1;31mKO\033[0m"
fi

echo -e "\nUnsigned conversions (x, X, o, u, p)\n"
echo -e -n "\tUnsigned int (basic): "

gcc main.c ../libftprintf.a -I.. -D UNSIGNED_BASIC -g -Wall -Wextra -Werror -o test.out && ./test.out >> result_ft_unsignedbasic.txt
gcc main.c ../libftprintf.a -I.. -D UNSIGNED_BASIC -D PRINTF_ON -g -Wall -Wextra -Werror -o test1.out && ./test1.out >> result_lib_unsignedbasic.txt

if diff result_ft_unsignedbasic.txt result_lib_unsignedbasic.txt >> diff.txt ; then
	echo -e "\033[1;32mOK\033[0m" && echo "Unigned int (basic): No Diff" >> diff.txt
else
	echo -e "\033[1;31mKO\033[0m"
fi

echo -e -n "\tUnsigned int (bonus flags): "

gcc main.c ../libftprintf.a -I.. -D UNSIGNED_BONUS_FLAGS -g -Wall -Wextra -Werror -o test.out && ./test.out >> result_ft_unsignedbonus1.txt
gcc main.c ../libftprintf.a -I.. -D UNSIGNED_BONUS_FLAGS -D PRINTF_ON -g -Wall -Wextra -Werror -o test1.out && ./test1.out >> result_lib_unsignedbonus1.txt

if diff result_ft_unsignedbonus1.txt result_lib_unsignedbonus1.txt >> diff.txt ; then
	echo -e "\033[1;32mOK\033[0m" && echo "Unsigned int (bonus flags): No Diff" >> diff.txt
else
	echo -e "\033[1;31mKO\033[0m"
fi

echo -e -n "\tUnsigned int (bonus length): "

gcc main.c ../libftprintf.a -I.. -D UNSIGNED_BONUS_LENGTH -g -Wall -Wextra -Werror -o test.out && ./test.out >> result_ft_unsignedbonus2.txt
gcc main.c ../libftprintf.a -I.. -D UNSIGNED_BONUS_LENGTH -D PRINTF_ON -g -Wall -Wextra -Werror -o test1.out && ./test1.out >> result_lib_unsignedbonus2.txt

if diff result_ft_unsignedbonus2.txt result_lib_unsignedbonus2.txt >> diff.txt ; then
	echo -e "\033[1;32mOK\033[0m" && echo "Unsigned int (bonus length): No Diff" >> diff.txt
else
	echo -e "\033[1;31mKO\033[0m"
fi

echo -e -n "\tPointer (basic): "

gcc main.c ../libftprintf.a -I.. -D POINTER_BASIC -g -Wall -Wextra -Werror -o test.out && ./test.out >> result_ft_pointerbasic.txt
gcc main.c ../libftprintf.a -I.. -D POINTER_BASIC -D PRINTF_ON -g -Wall -Wextra -Werror -o test1.out && ./test1.out >> result_lib_pointerbasic.txt

if diff result_ft_pointerbasic.txt result_lib_pointerbasic.txt >> diff.txt ; then
	echo -e "\033[1;32mOK\033[0m" && echo "Pointer (basic): No Diff" >> diff.txt
else
	echo -e "\033[1;31mKO\033[0m"
fi

echo -e "\nStrings and chars (s, c, %)\n"
echo -e -n "\tStrings (basic): "

gcc main.c ../libftprintf.a -I.. -D STRING_BASIC -g -Wall -Wextra -Werror -o test.out && ./test.out >> result_ft_stringbasic.txt
gcc main.c ../libftprintf.a -I.. -D STRING_BASIC -D PRINTF_ON -g -Wall -Wextra -Werror -o test1.out && ./test1.out >> result_lib_stringbasic.txt

if diff result_ft_stringbasic.txt result_lib_stringbasic.txt >> diff.txt ; then
	echo -e "\033[1;32mOK\033[0m" && echo "String (basic): No Diff" >> diff.txt
else
	echo -e "\033[1;31mKO\033[0m"
fi

echo -e -n "\tStrings (bonus length): "

gcc main.c ../libftprintf.a -I.. -D STRING_BONUS_LENGTH -g -Wall -Wextra -Werror -o test.out && ./test.out >> result_ft_stringbonus1.txt
gcc main.c ../libftprintf.a -I.. -D STRING_BONUS_LENGTH -D PRINTF_ON -g -Wall -Wextra -Werror -o test1.out && ./test1.out >> result_lib_stringbonus1.txt

if diff result_ft_stringbonus1.txt result_lib_stringbonus1.txt >> diff.txt ; then
	echo -e "\033[1;32mOK\033[0m" && echo "String (bonus length): No Diff" >> diff.txt
else
	echo -e "\033[1;31mKO\033[0m"
fi

echo -e -n "\tChars (basic): "

gcc main.c ../libftprintf.a -I.. -D CHAR_BASIC -g -Wall -Wextra -Werror -o test.out && ./test.out >> result_ft_charbasic.txt
gcc main.c ../libftprintf.a -I.. -D CHAR_BASIC -D PRINTF_ON -g -Wall -Wextra -Werror -o test1.out && ./test1.out >> result_lib_charbasic.txt

if diff result_ft_charbasic.txt result_lib_charbasic.txt >> diff.txt ; then
	echo -e "\033[1;32mOK\033[0m" && echo "Char (basic): No Diff" >> diff.txt
else
	echo -e "\033[1;31mKO\033[0m"
fi

echo -e -n "\tChars (bonus length): "

gcc main.c ../libftprintf.a -I.. -D CHAR_BONUS_LENGTH -g -Wall -Wextra -Werror -o test.out && ./test.out >> result_ft_charbonus1.txt
gcc main.c ../libftprintf.a -I.. -D CHAR_BONUS_LENGTH -D PRINTF_ON -g -Wall -Wextra -Werror -o test1.out && ./test1.out >> result_lib_charbonus1.txt

if diff result_ft_charbonus1.txt result_lib_charbonus1.txt >> diff.txt ; then
	echo -e "\033[1;32mOK\033[0m" && echo "Char (bonus length): No Diff" >> diff.txt
else
	echo -e "\033[1;31mKO\033[0m"
fi

echo -e -n "\tPercent (basic): "

gcc main.c ../libftprintf.a -I.. -D PERCENT_BASIC -g -Wall -Wextra -Werror -o test.out && ./test.out >> result_ft_percentbasic.txt
gcc main.c ../libftprintf.a -I.. -D PERCENT_BASIC -D PRINTF_ON -g -Wall -Wextra -Werror -o test1.out && ./test1.out >> result_lib_percentbasic.txt

if diff result_ft_percentbasic.txt result_lib_percentbasic.txt >> diff.txt ; then
	echo -e "\033[1;32mOK\033[0m" && echo "Percent (basic): No Diff" >> diff.txt
else
	echo -e "\033[1;31mKO\033[0m"
fi

echo -e "\nN conversion (n)\n"
echo -e -n "\tN (basic): "

gcc main.c ../libftprintf.a -I.. -D N_BASIC -g -Wall -Wextra -Werror -o test.out && ./test.out >> result_ft_nbasic.txt
gcc main.c ../libftprintf.a -I.. -D N_BASIC -D PRINTF_ON -g -w -o test1.out && ./test1.out >> result_lib_nbasic.txt

if diff result_ft_nbasic.txt result_lib_nbasic.txt >> diff.txt ; then
	echo -e "\033[1;32mOK\033[0m" && echo "N (basic): No Diff" >> diff.txt
else
	echo -e "\033[1;31mKO\033[0m"
fi

echo -e -n "\tN (bonus - length): "

gcc main.c ../libftprintf.a -I.. -D N_BONUS_LENGTH -g -Wall -Wextra -Werror -o test.out && ./test.out >> result_ft_nbonus1.txt
gcc main.c ../libftprintf.a -I.. -D N_BONUS_LENGTH -D PRINTF_ON -g -Wall -Wextra -Werror -o test1.out && ./test1.out >> result_lib_nbonus1.txt

if diff result_ft_nbonus1.txt result_lib_nbonus1.txt >> diff.txt ; then
	echo -e "\033[1;32mOK\033[0m" && echo "N (bonus - length): No Diff" >> diff.txt
else
	echo -e "\033[1;31mKO\033[0m"
fi

echo -e "\nFloats (f, e, g)\n"
echo -e -n "\tFLoats (basic): "

gcc main.c ../libftprintf.a -I.. -D FLOAT_BASIC -g -Wall -Wextra -Werror -o test.out && ./test.out >> result_ft_floatbasic.txt
gcc main.c ../libftprintf.a -I.. -D FLOAT_BASIC -D PRINTF_ON -g -Wall -Wextra -Werror -o test1.out && ./test1.out >> result_lib_floatbasic.txt

if diff result_ft_floatbasic.txt result_lib_floatbasic.txt >> diff.txt ; then
	echo -e "\033[1;32mOK\033[0m" && echo "Floats (basic): No Diff" >> diff.txt
else
	echo -e "\033[1;31mKO\033[0m"
fi

echo -e -n "\tFloats (bonus - flags): "

gcc main.c ../libftprintf.a -I.. -D FLOAT_BONUS_FLAGS -g -Wall -Wextra -Werror -o test.out && ./test.out >> result_ft_floatbonus1.txt
gcc main.c ../libftprintf.a -I.. -D FLOAT_BONUS_FLAGS -D PRINTF_ON -g -Wall -Wextra -Werror -o test1.out && ./test1.out >> result_lib_floatbonus1.txt

if diff result_ft_floatbonus1.txt result_lib_floatbonus1.txt >> diff.txt ; then
	echo -e "\033[1;32mOK\033[0m" && echo "Float (bonus - flags): No Diff" >> diff.txt
else
	echo -e "\033[1;31mKO\033[0m"
fi

echo -e "\nLeaks\n"

gcc main.c ../libftprintf.a -I.. -D LEAKS -g -Wall -Wextra -Werror -o test.out && ./test.out >> result_ft_leaks.txt

if cat result_ft_leaks.txt | grep LEAK: ; then
	echo -e "\t\033[1;31mKO\033[0m"
else
	echo -e "\t\033[1;32mOK\033[0m"
fi

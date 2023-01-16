CC = gcc
FLAG_C = -c
FLAG_O = -o
# ASAN = -g -fsanitize=address
FLAG_COV = --coverage
FLAG_ER = -Wall -Werror -Wextra -std=c11
s21_MATH_C = ./s21_functions/s21_*.c 
s21_MATH_O = s21_*.o
SUITE_CASES_C = ./s21_test/check_*.c
SUITE_CASES_O = check_*.o

all: clean gcov_report
	@mkdir add_files
	@mv *.o *.gcda *.gcno *.a *.info add_files

s21_math.a:
	$(CC) $(FLAG_C) $(FLAG_ER) $(s21_MATH_C) 
	ar rc s21_math.a $(s21_MATH_O)
	ranlib s21_math.a

test: s21_math.a
	$(CC) $(FLAG_C) $(FLAG_ER) $(SUITE_CASES_C) ./s21_test/check_s21_main.c
	ar rc suite_cases.a check_*.o
	ranlib suite_cases.a
	$(CC) $(FLAG_ER) $(FLAG_COV) $(FLAG_O) tests s21_math.a suite_cases.a $(s21_MATH_C) check_s21_main.o -lcheck
	./tests

gcov_report: s21_math.a test
	$(CC) $(FLAG_C) $(FLAG_ER) $(SUITE_CASES_C) ./s21_test/check_s21_main.c
	lcov -t s21_*.c.gcov -o s21_*.info --no-external -c -d .
	genhtml -o report ./s21_*.info
	open ./report/index.html

check:
	cppcheck --enable=all --force *.h *.c
	cp ../materials/linters/CPPLINT.cfg CPPLINT.cfg
	python3 ../materials/linters/cpplint.py --extension=c *.c *.h
	CK_FORK=no leaks --atExit -- ./tests
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes --verbose --log-file=RESULT_VALGRIND.txt ./tests

install_brew:
	cd ~
	curl -fsSL https://rawgit.com/kube/42homebrew/master/install.sh | zsh
	brew install lcov

clean:
	-rm -rf *.o *.html *.gcda *.gcno *.css *.a *.gcov *.info *.out *.cfg *.txt
	-rm -rf tests
	-rm -rf report
	-rm -rf add_files
	find . -type d -name 'tests.dSYM' -exec rm -r {} +

# fclean:
# 	@rm -rf

# rebuild:
# 	fclean all

# .PHONY:	all clean fclean rebuild

CC = clang
CFLAGS = -Wall -Wextra
RM = rm -f
INCLUDE_DIRS += -I../
LIBS += -lm
BASE = suite.c minunit.h
CTYPE = ../ft_isalpha.c \
		../ft_isdigit.c \
		../ft_isalnum.c \
		../ft_isascii.c \
		../ft_isprint.c \
		../ft_toupper.c \
		../ft_tolower.c

STRING = ../ft_strnstr.c \
		../ft_strncmp.c \
		../ft_memcmp.c

ctype: $(BASE)
	$(CC) $(CFLAGS) $(INCLUDE_DIRS) $(LIBS) $< $(CTYPE) -o $@

string: $(BASE)
	$(CC) $(CFLAGS) $(INCLUDE_DIRS) $(LIBS) $< $(STRING) -o $@

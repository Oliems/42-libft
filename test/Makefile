CC = clang
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
INCLUDE_DIRS += -I../
LIBS += -lm
CTYPE = ../ft_isalpha.c \
		../ft_isdigit.c \
		../ft_isalnum.c \
		../ft_isascii.c \
		../ft_isprint.c \
		../ft_toupper.c \
		../ft_tolower.c \

ctype: suite.c minunit.h
	$(CC) $(CFLAGS) $(INCLUDE_DIRS) $(LIBS) $< $(CTYPE) -o $@

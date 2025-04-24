CC=cc
CFLAGS=-Wall -Wextra -Werror

SOURCES = ft_isalpha.c

SOURCES_BONUS = ft_lstnew.c

DEPS = libft.h

PROG = libft.a

OBJECTS = $(SOURCES:.c=.o)

OBJECTS_BONUS = $(SOURCES_BONUS:.c=.o)

all : $(PROG)

clean :
	rm -f $(OBJECTS)

fclean : clean
	rm -f $(PROG)

re : fclean all

bonus : $(OBJECTS_BONUS)
	ar rcs $(DEPS) $<

$(PROG) : $(OBJECTS)
	ar rcs $@ $<

.c.o :
	$(CC) $(CFLAGS) $(HEADER) -c $< -o $*.o

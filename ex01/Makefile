NAME = span

INPUT = \
	main.cpp \
	Span.cpp \

OUTPUT = ${INPUT:.cpp=.o}

all: ${NAME}

%.o: %.cpp
	c++ -Wall -Wextra -Werror -std=c++98 -c $< -o $@

${NAME}: ${OUTPUT}
	c++ -Wall -Wextra -Werror -std=c++98 ${OUTPUT} -o ${NAME}

clean:
	rm -f ${OUTPUT}

fclean:	clean
	rm -f ${NAME}

re:		fclean all

test: $(NAME)
	./$(NAME)
#:::: INFO :::::::::::::::::::::::::::::::::::::::::::::::::::
NAME	=	test

FILES	=	main.cpp	\
			Animal.cpp	\
			Cat.cpp		\
			Dog.cpp

HEADER	=	Animal.hpp	\
			Cat.hpp		\
			Dog.hpp
OBJ_DIR	=	./obj/
OBJ		=	$(addprefix $(OBJ_DIR), $(FILES:.cpp=.o))
FLAGS	=	-Wall -Wextra -Werror -std=c++98
COMPILE	=	clang++

#:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
.PHONY	:	all clean fclean re
#			::::::::::::::::::::::::::::::::::::::::::::::::::
#			::	all 	::	 compiles files with clang++	::
#			::	clean 	::	 removes object files			::
#			::	fclean	::	 removes object files & program	::
#			::::::::::::::::::::::::::::::::::::::::::::::::::

all		:	$(NAME)

$(NAME)	:	obj $(OBJ)
			$(COMPILE) $(FLAGS) $(OBJ) -o $@

obj		:
			@mkdir -p obj/

obj/%.o	:	%.cpp $(HEADER)
			@$(COMPILE) $(FLAGS) -c $< -o $@

clean	:
			@rm -rf obj/

fclean	:	clean
			@rm -f $(NAME)

re		:	fclean all

#			WIKI	::::::::::::::::::::::::::::::::::::::::::
#					::	$@	::	target's name				::
#					::	$<	::	first prerequisites' names	::
#					::	$^	::	all prerequisites' names	::
#					::::::::::::::::::::::::::::::::::::::::::
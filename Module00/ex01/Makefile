#:::: INFO :::::::::::::::::::::::::::::::::::::::::::::::::::
NAME	=	phonebook

FILES	=	phonebook.cpp \
			contact.cpp \
			main.cpp
HEADERS	=	phonebook.hpp
OBJ_DIR	=	./obj/
OBJ		=	$(addprefix $(OBJ_DIR), $(FILES:.cpp=.o))
FLAGS	=	-Wall -Wextra -Werror

#:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
.PHONY	:	all clean fclean re
#			::::::::::::::::::::::::::::::::::::::::::::::::::
#			::	all 	::	 compiles files with clang++	::
#			::	clean 	::	 removes object files			::
#			::	fclean	::	 removes object files & program	::
#			::::::::::::::::::::::::::::::::::::::::::::::::::

all		:	$(NAME)

$(NAME)	:	obj $(OBJ)
			clang++ $(FLAGS) $(OBJ) -o $@

obj		:
			@mkdir -p obj/

obj/%.o	:	%.cpp $(HEADERS)
			@clang++ $(FLAGS) -c $< -o $@

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

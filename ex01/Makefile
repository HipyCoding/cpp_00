# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: candrese <candrese@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/20 18:03:38 by christian         #+#    #+#              #
#    Updated: 2025/01/30 18:43:47 by candrese         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++17 #-g3

SRCS = main.cpp Phonebook.cpp Contact.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

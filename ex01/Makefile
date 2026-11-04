# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: melwong <melwong@student.42kl.edu.my>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/11/04 15:19:00 by melwong           #+#    #+#              #
#    Updated: 2026/11/04 15:19:01 by melwong          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	zombieHorde
CXX				=	c++
CXXFLAGS		=	-Wall -Wextra -Werror -std=c++98
SRC_DIR			=	.
OBJ_DIR			=	obj
INC_DIR			=	.

# Enable silent mode unless VERBOSE=1
SILENT			=	@
ifeq ($(VERBOSE), 1)
SILENT			=
endif

# Colours
RED				=	\033[0;31m
GREEN			=	\033[0;32m
BLUE			=	\033[0;34m
MAGENTA			=	\033[0;35m
CYAN			=	\033[0;36m
RESET			=	\033[0m

SRCS			=	$(SRC_DIR)/main.cpp \
					$(SRC_DIR)/Zombie.cpp \
					$(SRC_DIR)/zombieHorde.cpp
OBJS			=	$(SRCS:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)
DEPS			=	$(OBJS:.o=.d)

# Rules

all: $(NAME)

$(NAME): $(OBJS)
	$(SILENT)$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	@printf "$(GREEN)[OK] $(NAME) built successfully.$(RESET)\n"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	@printf "$(CYAN)[CXX] $<$(RESET)\n"
	$(SILENT)$(CXX) $(CXXFLAGS) -MMD -MP -I$(INC_DIR) -c $< -o $@

$(OBJ_DIR):
	$(SILENT)mkdir -p $(OBJ_DIR)
	@printf "$(BLUE)[DIR] Created $(OBJ_DIR)/$(RESET)\n"

clean:
	@printf "$(RED)[CLEAN] Removing object files$(RESET)\n"
	$(SILENT)rm -rf $(OBJ_DIR)

fclean: clean
	@printf "$(RED)[FCLEAN] Removing $(NAME)$(RESET)\n"
	$(SILENT)rm -f $(NAME)

re: fclean all

-include $(DEPS)

.PHONY: all clean fclean re

NAME			=	zombie
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
CYAN			=   \033[0;36m
RESET			=	\033[0m

SRCS			=	$(SRC_DIR)/main.cpp \
					$(SRC_DIR)/Zombie.cpp \
					$(SRC_DIR)/newZombie.cpp \
					$(SRC_DIR)/randomChump.cpp
OBJS			=	$(SRCS:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

# Rules

all: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJS)
	$(SILENT)$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	@echo "$(GREEN)[OK] $(NAME) built successfully.$(RESET)"

$(OBJ_DIR):
	$(SILENT)mkdir -p $(OBJ_DIR)
	@echo "$(BLUE)[DIR] Created $(OBJ_DIR)/$(RESET)"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	@echo "$(CYAN)[CXX] $<$(RESET)"
	$(SILENT)$(CXX) $(CXXFLAGS) -I$(INC_DIR) -c $< -o $@

clean:
	@echo "$(RED)[CLEAN] Removing object files$(RESET)"
	$(SILENT)rm -rf $(OBJ_DIR)

fclean: clean
	@echo "$(RED)[FCLEAN] Removing $(NAME)$(RESET)"
	$(SILENT)rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

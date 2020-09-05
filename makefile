### COMPILATION ###
CC     = gcc
FLAGS  = -c -Wall -Wextra -Werror

### EXECUTABLE ###
NAME1   = Colleen
NAME2   = Grace
NAME3   = Sully

### INCLUDES ###
SRC_PATH  = C

### SOURCES ###
SOURCES_C = Colleen.c
SOURCES_G = Grace.c
SOURCES_S = Sully.c

SRCS_C = $(addprefix $(SRC_PATH)/,$(SOURCES_C))
SRCS_G = $(addprefix $(SRC_PATH)/,$(SOURCES_G))
SRCS_S = $(addprefix $(SRC_PATH)/,$(SOURCES_S))

### OBJECTS ###
OBJ_C = $(SOURCES_C:.c=.o)
OBJ_G = $(SOURCES_G:.c=.o)
OBJ_S = $(SOURCES_S:.c=.o)

### RULES ###

all: $(NAME1) $(NAME2) $(NAME3)

$(NAME1):
	@$(CC) $(SRCS_C) $(FLAGS)
	@$(CC) -o $(NAME1) $(OBJ_C)
	@echo "Project Colleen compiled"

$(NAME2):
	@$(CC) $(SRCS_G) $(FLAGS)
	@$(CC) -o $(NAME2) $(OBJ_G)
	@echo "Project Grace compiled"

$(NAME3):
	@$(CC) $(SRCS_S) $(FLAGS)
	@$(CC) -o $(NAME3) $(OBJ_S)
	@echo "Project Sully compiled"

clean:
	@echo "Cleaning..."
	@rm -f *.o

fclean:
	@echo "Fcleaning..."
	@rm -f *.o
	@rm -f $(NAME1)
	@rm -f $(NAME2)
	@rm -f $(NAME3)

re: fclean
	@$(MAKE) all -j

### COMPILATION ###
CC     = gcc
FLAGS  = -Wall -Wextra -Werror

### EXECUTABLE ###
NAME1   = Colleen
NAME2   = Grace
NAME3   = Sully

### INCLUDES ###
OBJ_PATH  = objs
SRC_PATH  = C

### SOURCES ###
SOURCES_C = Colleen.c
SOURCES_G = Grace.c
SOURCES_S = Sully.c

SRCS_C = $(addprefix $(SRC_PATH)/,$(SOURCES_C))
SRCS_G = $(addprefix $(SRC_PATH)/,$(SOURCES_G))
SRCS_S = $(addprefix $(SRC_PATH)/,$(SOURCES_S))

### OBJECTS ###
OBJS = $(addprefix $(OBJ_PATH)/,$(SOURCES:.c=.o))

### RULES ###

all: $(NAME1) $(NAME2) $(NAME3)

$(NAME1):
	@$(CC) $(SRCS_C) $(FLAGS) -o $@ $^
	@echo "Projects successfully compiled"

$(NAME2):
	@$(CC) $(SRCS_G) $(FLAGS) -o $@ $^
	@echo "Projects successfully compiled"

$(NAME3):
	@$(CC) $(SRCS_S) $(FLAGS) -o $@ $^
	@echo "Projects successfully compiled"

clean:
	@echo "Cleaning..."
	@rm -f *.o

fclean:
	@echo "Fcleaning..."
	@rm -f $(NAME1)
	@rm -f $(NAME2)
	@rm -f $(NAME3)

re: fclean
	@$(MAKE) all -j

.PHONY: temporary, re, fclean, clean
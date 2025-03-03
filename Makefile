# compilator
GCC = gcc

# my dirs
SRC_DIR = src
OBJ_DIR = obj
INCLUDE_DIR = include

# flags 
CFLAGS = -I$(INCLUDE_DIR)

# output name 
OUTPUT = calculator

# all C files 
SRC_FILES := $(wildcard $(SRC_DIR)/*.c)

# corresponding O files list 
OBJ_FILES := $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC_FILES))


all: $(OUTPUT)

$(OUTPUT): $(OBJ_FILES)
	$(GCC) $(OBJ_FILES) -o $(OUTPUT)

# Pattern 
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	mkdir -p $(dir $@)  # ensure the path exists 
	$(GCC) -c $< -o $@ $(CFLAGS)

.PHONY: clean #even if clean file exists
clean:
	rm -rf $(OBJ_DIR) $(OUTPUT)


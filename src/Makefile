# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra -g

# Directories (update path for WSL)
SRC_DIR = /mnt/c/CProjects/JenKinCIDemo/src/dev
BUILD_DIR = build

# Source and object files
SRCS = $(wildcard $(SRC_DIR)/*.c)
OBJS = $(SRCS:$(SRC_DIR)/%.c=$(BUILD_DIR)/%.o)

# Output executable
TARGET = $(BUILD_DIR)/arithmetic

# Debugging: Check the detected source files
$(info Source files: $(SRCS))

# Default rule
all: $(TARGET)

# Linking step
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

# Compilation step
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Create the build directory if it doesn't exist
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# Clean up the build files
clean:
	rm -rf $(BUILD_DIR)

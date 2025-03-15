# Compiler and flags
CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++11

# Source files and object files
SRCS = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp
OBJS = $(SRCS:.cpp=.o)

# Target executable
TARGET = zombie

# Rules
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(TARGET)

re: fclean all

CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++11

SRC = main.cpp
OBJS = $(SRC:.cpp=.o)

# Target executable
TARGET = ptrref

# Rules
all: $(TARGET)
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clear:
	rm -f $(OBJS)

fclean: clear
	rm -f $(TARGET)

re: fclean all

.PHONY: all clear fclean re
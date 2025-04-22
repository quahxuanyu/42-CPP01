CXX = c++
CXXFLAGS = -std=c++11 -Wall -Wextra -Werror

SRC = main.cpp Harl.cpp
OBJS = $(SRC:.cpp=.o)

# Target executable
TARGET = harl

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

.PHONY: all clean fclean re
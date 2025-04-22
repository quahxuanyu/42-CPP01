CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++11

SRC = HumanA.cpp HumanB.cpp main.cpp Weapon.cpp
OBJS = $(SRC:.cpp=.o)

# Target executable
TARGET = weapon

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

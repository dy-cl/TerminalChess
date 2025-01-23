CXX = g++
CXXFLAGS = -Wall -Wextra -O3
TARGET = TerminalChess
SRC = Board.cpp Main.cpp Turn.cpp Valid.cpp
HEADERS = Board.h Main.h Turn.h Valid.h
OBJ = $(SRC:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

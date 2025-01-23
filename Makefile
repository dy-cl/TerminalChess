CXX = g++
CXXFLAGS = -Wall -Wextra -O3
TARGET = TerminalChess
SRC = Board.cpp Main.cpp
HEADERS = Board.h Piece.h
OBJ = $(SRC:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

CXX = g++
CXXFLAGS = -Wall -Wextra -O3
TARGET = TerminalChess
SRC = Board.cpp Game.cpp Main.cpp Piece.cpp
HEADERS = Board.h Game.h Piece.h
OBJ = $(SRC:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17
BIN = bin

.PHONY: all clean test

all: $(BIN)/testNode $(BIN)/testListArray $(BIN)/testListLinked $(BIN)/testPoint2D $(BIN)/testCircle $(BIN)/testRectangle $(BIN)/testSquare $(BIN)/testDrawing

$(BIN):
	mkdir -p $(BIN)

$(BIN)/testNode: testNode.cpp Node.h | $(BIN)
	$(CXX) $(CXXFLAGS) -o $@ testNode.cpp

$(BIN)/testListArray: testListArray.cpp ListArray.h List.h | $(BIN)
	$(CXX) $(CXXFLAGS) -o $@ testListArray.cpp

$(BIN)/testListLinked: testListLinked.cpp ListLinked.h Node.h List.h | $(BIN)
	$(CXX) $(CXXFLAGS) -o $@ testListLinked.cpp

$(BIN)/testPoint2D: testPoint2D.cpp Point2D.cpp Point2D.h | $(BIN)
	$(CXX) $(CXXFLAGS) -o $@ testPoint2D.cpp Point2D.cpp

$(BIN)/testCircle: testCircle.cpp Circle.cpp Circle.h Shape.cpp Shape.h Point2D.cpp Point2D.h | $(BIN)
	$(CXX) $(CXXFLAGS) -o $@ testCircle.cpp Circle.cpp Shape.cpp Point2D.cpp

$(BIN)/testRectangle: testRectangle.cpp Rectangle.cpp Rectangle.h Shape.cpp Shape.h Point2D.cpp Point2D.h | $(BIN)
	$(CXX) $(CXXFLAGS) -o $@ testRectangle.cpp Rectangle.cpp Shape.cpp Point2D.cpp

$(BIN)/testSquare: testSquare.cpp Square.cpp Square.h Rectangle.cpp Rectangle.h Shape.cpp Shape.h Point2D.cpp Point2D.h | $(BIN)
	$(CXX) $(CXXFLAGS) -o $@ testSquare.cpp Square.cpp Rectangle.cpp Shape.cpp Point2D.cpp

$(BIN)/testDrawing: testDrawing.cpp Drawing.cpp Drawing.h Circle.cpp Circle.h Square.cpp Square.h Rectangle.cpp Rectangle.h Shape.cpp Shape.h Point2D.cpp Point2D.h ListArray.h List.h | $(BIN)
	$(CXX) $(CXXFLAGS) -o $@ testDrawing.cpp Drawing.cpp Circle.cpp Square.cpp Rectangle.cpp Shape.cpp Point2D.cpp

test: all
	@for t in testNode testListArray testListLinked testPoint2D testCircle testRectangle testSquare testDrawing; do \
		echo "========== $$t =========="; \
		./$(BIN)/$$t || exit 1; \
	done

clean:
	rm -rf $(BIN) *.o *.gch *.pch

CXX=g++

TARGET=xml-parser

all:
	$(CXX) main.cpp -o $(TARGET)

clean:
	rm $(TARGET)

	

run:all
	./$(TARGET)


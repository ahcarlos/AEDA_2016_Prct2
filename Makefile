CXX=g++ 
CXXFLAGS=-g

OBJS = racional.o complejo.o main.o

all: ${OBJS}
	$(CXX) $(CXXFLAGS) -o rpn ${OBJS}

clean: 
	rm -rf *.o rpn
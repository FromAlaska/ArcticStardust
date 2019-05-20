srcdir = ./src
filename = ArcticStardust
uweb = ./src/uWeb
OPENCV=`pkg-config opencv --cflags --libs`

main: $(srcdir)/main.cpp
	g++ --std=c++17 $(srcdir)/main.cpp -o $(filename) -lglut -lGLU -lGL -lpthread -pthread $(OPENCV)

# Handle unanticipated situations
.PHONY : clean
clean:
	-rm $(filename)

srcdir = ./src
filename = ArcticStardust

main: $(srcdir)/main.cpp
	g++ $(srcdir)/main.cpp -o $(filename) -lglut -lGLU -lGL

# Handle unanticipated situations
.PHONY : clean
clean:
	-rm $(filename)
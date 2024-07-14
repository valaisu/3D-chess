CFLAGS = -std=c++17 -O3
LDFLAGS = -lglfw -lvulkan -ldl -lpthread -lX11 -lXxf86vm -lXrandr -lXi

VulkanTest: main.cpp
	g++ $(CFLAGS) -o Chess main.cpp $(LDFLAGS)

.PHONY: test clean

test: Chess
	./Chess

clean:
	rm -f Chess
	

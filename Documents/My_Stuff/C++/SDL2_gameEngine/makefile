build:
	g++ -w -std=c++14 \
	./src/*.cpp \
	-o game \
	-"./lib/lua" \
	-L"./lib/lua" \
	-llua \
	-lSDL2 \
	-lSDL2_image;

clean:
	rm ./game;

run:
	./game;
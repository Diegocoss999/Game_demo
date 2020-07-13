all:
	g++ -o game *.cpp -lX11 -lGL -lpthread -lpng -lstdc++fs -std=c++17
	#  locked at 60 frames
	./game 
	# around 207 frames
	# vblank_mode=0 ./game 
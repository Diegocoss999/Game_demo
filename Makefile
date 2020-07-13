all:
	g++ -o game *.cc -lX11 -lGL -lpthread -lpng -lstdc++fs -std=c++17
	#  locked at 60 frames
	./game 
	# around 207 frames
	# vblank_mode=0 ./game 
push:
	git commit -a
	git push

objects = nature.o wolf.o

nature: $(objects)
	g++ -o nature $(objects)
nature.o: nature.C wolf.H nature.H
	g++ -c nature.C -std=c++11
wolf.o: wolf.C wolf.H classification.H
	g++ -c wolf.C -std=c++11

clean:
	rm *.o nature

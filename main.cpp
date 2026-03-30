#include "genome.h"

int main() {
	genome myGenome;

	myGenome.print();

	myGenome.randomize();

	myGenome.print();

	myGenome.set_blue(0, 226);

	myGenome.print();

	return 0;
}

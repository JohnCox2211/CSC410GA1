struct Pixel {
	int red;
	int green;
	int blue;
};

class genome{
public:
	genome();
	~genome();
	void allocate(int nGenes)
	void deallocate();
	void randomize();

	//setters
	void set_red(int index, int value);
	void set_green(int index, int value);
	void set_blue(int index, int value);

	//getters
	int get_red(int index);
	int get_green(int index);
	int get_blue(int index);

	void print(); // for display

private:
	Pixel* genes;
	int nGenes;
};


#include <iostream>;

using namespace std;

class FunnyTree {
public:
	virtual void cdraw() = 0;
};

class TreeWithPluses : public FunnyTree {
public:
	void cdraw() {
		printf(" /\\\n/++\\");
	}
};

class TreeWithStars : public FunnyTree {
public:
	void cdraw() {
		printf(" /\\\n/**\\");
	}
};

class TreeWithSlashs : public FunnyTree {
public:
	void cdraw() {
		printf(" /\\\n//\\\\");
	}
};


int Go1(void) {
	FunnyTree* trees[3];
	0[trees] = new TreeWithSlashs;
	1[trees] = new TreeWithStars;
	2[trees] = new TreeWithPluses;

	for(int i = 0; i < 3; i++) {
		printf("Drawing %d\n", i + 1);
		trees[i]->cdraw();
		delete trees[i];
		cout << endl;
	}
	
	return 0;
}
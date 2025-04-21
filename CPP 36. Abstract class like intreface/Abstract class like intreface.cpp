#include<iostream>

using namespace std;

class SoccerPalyer {
public:
	string name;
	string surname;
	int number;
	virtual ~SoccerPalyer() = 0;
};

class IDefense {
public:
	virtual void Defense() = 0;
};
class IAttack {
public:
	virtual void Attack() = 0;
};

class IMidfielder: public IAttack, public IDefense {};
class IAttack {
public:
	virtual void Attack() = 0;
};

class Forward :public SoccerPalyer, public IAttack {
	void Attack() override {
		cout << "Ya umeyu atakovat" << endl;
	}
};

class Defender : public SoccerPalyer, public IDefense {
	void Defense() override {
		cout << "Ya umeyu zashishat" << endl;
	}
};



class Midfielder : public SoccerPalyer, public IMidfielder {
	void Attack() override {
		cout << "Ya umeyu atakovat" << endl;
	}
	void Defense() override {
		cout << "Ya umeyu zashishat" << endl;
	}
};

void announcementForward(IAttack& forward) {
	forward.Attack();
}
void announcementDefender(IDefense& defender) {
	defender.Defense();
}
void announcementMidfielder(IMidfielder& midfielder) {
	midfielder.Attack();
	midfielder.Defense();
}

// HDMI - High Definition Media Interface

// intreface
int main() {
	Forward forward;
	Defender defender;
	Midfielder midfielder;

	announcementMidfielder(midfielder);
	announcementDefender(defender);
	announcementDefender(midfielder);
	announcementForward(forward);
	announcementForward(midfielder);
}
#pragma once
class Shop {
private:
	static int counter;
	int c;
	std::string name;
	std::string type;
	std::string street;
	std::string cloak;
	friend void cloakShop(Shop& x);
public:
	Shop();
	~Shop();
	void init(std::string name, std::string type, std::string street, std::string cloak);
	void enter();
	void print();
	static void CountOfShop();
	int getSize() const;
};
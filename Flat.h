#pragma once
class Flat
{
private:
	int square;
	int price;
public:
	Flat(int square, int price);
	void operator=(Flat& obj);
	bool operator==(Flat& obj);
	bool operator>(Flat& obj);
};


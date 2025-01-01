#include "Flat.h"

Flat::Flat(int square, int price) {
	this->square = square;
	this->price = price;
}

void Flat::operator=(Flat& obj) {
	this->square = obj.square;
	this->price = obj.price;
}

bool Flat::operator==(Flat& obj) {
	if (this->square == obj.square) {
		return true;
	}
	else {
		return false;
	}
}

bool Flat::operator>(Flat& obj) {
	if (this->price > obj.price) {
		return true;
	}
	else {
		return false;
	}
}
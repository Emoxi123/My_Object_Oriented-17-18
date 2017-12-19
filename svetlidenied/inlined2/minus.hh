#ifndef MINUS_HH_
#define MINUS_HH_

#include "binary.hh"
#include "calculator.hh"

class Minus : public BinaryOperation {
protected:
	double execute(double arg1, double arg2) const;
public:
	Minus(Calculator& calculator)
		: BinaryOperation(calculator, "-") {}

};

#endif

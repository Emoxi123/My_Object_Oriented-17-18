#ifndef DIV_HH_
#define DIV_HH_

#include "binary.hh"
#include "calculator.hh"

class Div : public BinaryOperation {
protected:
	double execute(double arg1, double arg2) const;
public:
	Div(Calculator& calculator)
		: BinaryOperation(calculator, "/") {}

};

#endif

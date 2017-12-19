#ifndef MUL_HH_
#define MUL_HH_

#include "binary.hh"
#include "calculator.hh"

class Mul : public BinaryOperation {
protected:
	double execute(double arg1, double arg2) const;
public:
	Mul(Calculator& calculator)
		: BinaryOperation(calculator, "*") {}

};

#endif

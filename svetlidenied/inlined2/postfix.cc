#include <iostream>
#include "calculator.hh"
#include "negate.hh"
#include "power.hh"
#include "plus.hh"
#include "minus.hh"
#include "mul.hh"
#include "div.hh"

using namespace std;

int main() {
	Calculator calculator;
	calculator.add_operation(new Negate(calculator));
	calculator.add_operation(new Power(calculator));
	calculator.add_operation(new Plus(calculator));
	calculator.add_operation(new Minus(calculator));
	calculator.add_operation(new Mul(calculator));
	calculator.add_operation(new Div(calculator));
	
	calculator.run(cin, cout);
}

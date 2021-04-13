#include <iostream>
#include <vector>
#include <cmath>

#include "core.cpp"
#include "pmath.cpp"

int main() {
	Particle p1, p2;
	p1.pos = std::vector<double>{1, 1, 1};
	p2.pos = std::vector<double>{1, 2, 3};
	p1.radius = 1.15;
	p2.radius = 1.15;
	std::cout << pmath::distance(&p1, &p2) << '\n' << pmath::is_colliding(&p1, &p2) << '\n';
	return 0;
}
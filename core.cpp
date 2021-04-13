class Particle {
public:
	std::vector<double> pos;
	double radius;
	bool is_colliding(const Particle *);
};
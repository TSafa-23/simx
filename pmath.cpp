namespace pmath {
	double distance(const Particle *p1, const Particle *p2) {
		double ans(0);
		if (p1->pos.size() != p2->pos.size())
			return 0;
		for (unsigned short x = 0; x < p1->pos.size(); ++x) {
			ans += pow(p1->pos[x] - p2->pos[x], 2);
		}
		return sqrt(ans);
	}

	bool is_colliding(const Particle *p1, const Particle *p2) {
		if (p1->radius + p2->radius >= distance(p1, p2))
			return true;
		return false;
	}
}

bool Particle::is_colliding(const Particle *p1) {
	if (this->radius + p1->radius >= pmath::distance(this, p1))
		return true;
	return false;
}

double Particle::distance(const Particle *p1) {
	return pmath::distance(this, p1);
}

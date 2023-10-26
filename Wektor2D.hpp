class Wektor2D
{
public:
	Wektor2D(double wspX = 0, double wspY = 0)
	{
		x = wspX;
		y = wspY;
	}

	~Wektor2D()
	{
	}
	void setX(double wspx) { x = wspx; }
	double getX() { return x; }
	void setY(double wspy) { y = wspy; }
	double getY() { return y; }

private:
	double x;
	double y;
};

Wektor2D operator+(Wektor2D& wek1, Wektor2D& wek2)
{
	double x1 = wek1.getX(), x2 = wek2.getX(), y1=wek1.getY(), y2=wek2.getY();
	return Wektor2D(x1+x2, y1+y2);
}

double operator*(Wektor2D& wek1, Wektor2D& wek2)
{
	double x1 = wek1.getX(), x2 = wek2.getX(), y1 = wek1.getY(), y2 = wek2.getY();
	return x1 * x2 + y1 * y2;
}

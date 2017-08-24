class Rectangle
{
public:
	Rectangle(float side_l, float side_w);
	// Constructor allowing a user to input the length and width
	Rectangle();
	// Constructor using default values for both length and width
	void setLength(float side_l); void setWidth(float side_w); float getLength();
	float getWidth();
	double findArea();
	double findPerimeter();
private:
	float length;
	float width;
};
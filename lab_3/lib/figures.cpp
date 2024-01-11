#include<iostream>
#include<string>
#include<math.h>
class Figure
{
public:
	virtual void geometricCenter() = 0;
	virtual std::ostream& operator <<(std::ostream&) = 0;
	virtual std::istream& operator >>(std::istream&) = 0;
	virtual operator double() = 0;
};



class Octagon: public Figure
{
public:
	Octagon(){
		*this >> std::cin;
	}
	Octagon(float center_x, float center_y, float outpoint_x, float outpoint_y){
		this->center[0] = center_x;
		this->center[1] = center_y;
		this->rvector[0] = outpoint_x;
		this->rvector[1] = outpoint_y;
	}
	void geometricCenter() override {
		std::cout << "Geometric center:" << center[0] << " " << center[1] << std::endl;
	}
	std::ostream& operator << (std::ostream& os) override{
		float vector_length;
		float outpoint_1[2];
		float outpoint_2[2];
		float outpoint_3[2];
		float outpoint_4[2];
		float outpoint_5[2];
		float outpoint_6[2];
		float outpoint_7[2];
		float outpoint_8[2];
		
		vector_length = sqrt(rvector[0]*rvector[0]+rvector[1]*rvector[1]);
		float axis_vlength = sqrt(vector_length*vector_length/2);
		outpoint_1[0] = center[0]+axis_vlength;
		outpoint_1[1] = center[1]+axis_vlength;
		outpoint_2[0] = center[0]+vector_length;
		outpoint_2[1] = center[1];
		outpoint_3[0] = center[0]+axis_vlength;
		outpoint_3[1] = center[1]+axis_vlength*(-1);
		outpoint_4[0] = center[0];
		outpoint_4[1] = center[1]+vector_length*(-1);
		outpoint_5[0] = center[0]+axis_vlength*(-1);
		outpoint_5[1] = center[1]+axis_vlength*(-1);
		outpoint_6[0] = center[0]+vector_length*(-1);
		outpoint_6[1] = center[1];
		outpoint_7[0] = center[0]+axis_vlength*(-1);
		outpoint_7[1] = center[1]+axis_vlength;
		outpoint_8[0] = center[0];
		outpoint_8[1] = center[1]+vector_length;
		os << "Printing octagon coords" << std::endl <<
		"Radius-vector length:" << vector_length << std::endl <<
		"Coords:   " << "X       " << "Y" << std::endl <<
		"Point one:" << outpoint_1[0] << " " << outpoint_1[1] << std::endl <<
		"Point two:" << outpoint_2[0] << " " << outpoint_2[1] << std::endl <<
		"Point three:" << outpoint_3[0] << " " << outpoint_3[1] << std::endl <<
		"Point four:" << outpoint_4[0] << " " << outpoint_4[1] << std::endl <<
		"Point five:" << outpoint_5[0] << " " << outpoint_5[1] << std::endl <<
		"Point six:" << outpoint_6[0] << " " << outpoint_6[1] << std::endl <<
		"Point seven:" << outpoint_7[0] << " " << outpoint_7[1] << std::endl <<
		"Point eight:" << outpoint_8[0] << " " << outpoint_8[1] << std::endl;
		return os;
	}
	std::istream& operator >>(std::istream& is) override{
		std::cout << "Enter X, Y of center and X, Y of any point:";
		is >> this->center[0] >> this->center[1] >> this->rvector[0] >> this->rvector[1];
		return is;
	}
	operator double() override{
		double s;
		float vector_length;
		
		vector_length = sqrt(rvector[0]*rvector[0]+rvector[1]*rvector[1]);
		s = 2*vector_length*vector_length*sqrt(2);
		return s;
	}
private:
	float center[2];
	float rvector[2];
};



class Triangle: public Figure
{
public:
	Triangle(){
		*this >> std::cin;
	}
	Triangle(float point1_x, float point1_y, float point2_x, float point2_y, float point3_x, float point3_y){
		this->point_1[0] = point1_x;
		this->point_1[1] = point1_y;
		this->point_2[0] = point2_x;
		this->point_2[1] = point2_y;
		this->point_3[0] = point3_x;
		this->point_3[1] = point3_y;
	}
	void geometricCenter() override{
		float center[2];
		
		center[0] = (point_1[0]+point_2[0]+point_3[0])/3;
		center[1] = (point_1[1]+point_2[1]+point_3[1])/3;
		std::cout << "Geometric center:" << center[0] << " " << center[1] << std::endl;
	}
	std::ostream& operator <<(std::ostream& os) override{
		os << "Printing triangle coords" << std::endl <<
		"Coords:   " << "X       " << "Y" << std::endl <<
		"Point one:" << point_1[0] << " " << point_1[1] << std::endl <<
		"Point two:" << point_2[0] << " " << point_2[1] << std::endl <<
		"Point three:" << point_3[0] << " " << point_3[1] << std::endl;
		return os;
	}
	std::istream& operator >>(std::istream& is) override{
		std::cout << "Enter X, Y of points one, two and three:";
		is >> this->point_1[0] >> this->point_1[1] >>
		this->point_2[0] >> this->point_2[1] >>
		this->point_3[0] >> this->point_3[1];
		return is;
	}
	operator double() override{
		double s;
		double side_1;
		double side_2;
		double side_3;
		double half_perimetr;
		
		side_1 = sqrt(pow(point_1[0]-point_2[0], 2)+pow(point_1[1]-point_2[1], 2));
		side_2 = sqrt(pow(point_2[0]-point_3[0], 2)+pow(point_2[1]-point_3[1], 2));
		side_3 = sqrt(pow(point_3[0]-point_1[0], 2)+pow(point_3[1]-point_1[1], 2));
		half_perimetr = (side_1+side_2+side_3)/2;
		s = sqrt(half_perimetr*(half_perimetr-side_1)*(half_perimetr-side_2)*(half_perimetr-side_3));
		return s;
	}
private:
	float point_1[2];
	float point_2[2];
	float point_3[2];
};



class Square: public Figure
{
public:
	Square(){
		*this >> std::cin;
	}
	Square(float point1_x, float point1_y, float side){
		this->point_1[0] = point1_x;
		this->point_1[1] = point1_y;
		this->side = side;
	}
	void geometricCenter() override{
		float center[2];
		
		center[0] = (point_1[0]+point_2[0]+point_3[0]+point_4[0])/4;
		center[1] = (point_1[1]+point_2[1]+point_3[1]+point_4[1])/4;
		std::cout << "Geometric center:" << center[0] << " " << center[1] << std::endl;
	}
	virtual std::ostream& operator <<(std::ostream& os) override{
		os << "Printing square coords" << std::endl <<
		"Coords:   " << "X       " << "Y" << std::endl <<
		"Point one:" << point_1[0] << " " << point_1[1] << std::endl <<
		"Point two:" << point_2[0] << " " << point_2[1] << std::endl <<
		"Point three:" << point_3[0] << " " << point_3[1] << std::endl <<
		"Point four:" << point_4[0] << " " << point_4[1] << std::endl;
		return os;
	}
	virtual std::istream& operator >>(std::istream& is) override{
		std::cout << "Enter X, Y of left bottom point and length of side:";
		is >> this->point_1[0] >> this->point_1[1] >> this->side;
		point_2[0] = point_1[0]+side;
		point_2[1] = point_1[1];
		point_3[0] = point_1[0]+side;
		point_3[1] = point_1[1]+side;
		point_4[0] = point_1[0];
		point_4[1] = point_1[1]+side;
		return is;
	}
	operator double() override{
		double s;
		s = side*side;
		return s;
	}
private:
	float side;
	float point_1[2];
	float point_2[2];
	float point_3[2];
	float point_4[2];
};

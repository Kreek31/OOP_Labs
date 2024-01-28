#include<iostream>
#include<string>
#include<math.h>
#include"figure_init.cpp"

template <typename T=float> class Octagon: public Figure<T>
{
public:
	Octagon(){
		*this >> std::cin;
	}
	Octagon(T center_x, T center_y, T outpoint_x, T outpoint_y){
		this->center.first = center_x;
		this->center.second = center_y;
		this->rvector.first = outpoint_x;
		this->rvector.second = outpoint_y;
	}
	void geometricCenter() override {
		std::cout << "Geometric center:" << center.first << " " << center.second << std::endl;
	}
	std::ostream& operator << (std::ostream& os) override{
		float vector_length;
		std::pair<T, T> outpoint_1;
		std::pair<T, T> outpoint_2;
		std::pair<T, T> outpoint_3;
		std::pair<T, T> outpoint_4;
		std::pair<T, T> outpoint_5;
		std::pair<T, T> outpoint_6;
		std::pair<T, T> outpoint_7;
		std::pair<T, T> outpoint_8;
		
		vector_length = sqrt(rvector.first*rvector.first+rvector.second*rvector.second);
		float axis_vlength = sqrt(vector_length*vector_length/2);
		outpoint_1.first = center.first+axis_vlength;
		outpoint_1.second = center.second+axis_vlength;
		outpoint_2.first = center.first+vector_length;
		outpoint_2.second = center.second;
		outpoint_3.first = center.first+axis_vlength;
		outpoint_3.second = center.second+axis_vlength*(-1);
		outpoint_4.first = center.first;
		outpoint_4.second = center.second+vector_length*(-1);
		outpoint_5.first = center.first+axis_vlength*(-1);
		outpoint_5.second = center.second+axis_vlength*(-1);
		outpoint_6.first = center.first+vector_length*(-1);
		outpoint_6.second = center.second;
		outpoint_7.first = center.first+axis_vlength*(-1);
		outpoint_7.second = center.second+axis_vlength;
		outpoint_8.first = center.first;
		outpoint_8.second = center.second+vector_length;
		os << "Printing octagon coords" << std::endl <<
		"Radius-vector length:" << vector_length << std::endl <<
		"Coords:   " << "X       " << "Y" << std::endl <<
		"Point one:" << outpoint_1.first << " " << outpoint_1.second << std::endl <<
		"Point two:" << outpoint_2.first << " " << outpoint_2.second << std::endl <<
		"Point three:" << outpoint_3.first << " " << outpoint_3.second << std::endl <<
		"Point four:" << outpoint_4.first << " " << outpoint_4.second << std::endl <<
		"Point five:" << outpoint_5.first << " " << outpoint_5.second << std::endl <<
		"Point six:" << outpoint_6.first << " " << outpoint_6.second << std::endl <<
		"Point seven:" << outpoint_7.first << " " << outpoint_7.second << std::endl <<
		"Point eight:" << outpoint_8.first << " " << outpoint_8.second << std::endl;
		return os;
	}
	std::istream& operator >>(std::istream& is) override{
		std::cout << "Enter X, Y of center and X, Y of any point:";
		is >> this->center.first >> this->center.second >> this->rvector.first >> this->rvector.second;
		return is;
	}
	operator double() override{
		double s;
		float vector_length;
		
		vector_length = sqrt(rvector.first*rvector.first+rvector.second*rvector.second);
		s = 2*vector_length*vector_length*sqrt(2);
		return s;
	}
private:
	std::pair<T, T> center;
	std::pair<T, T> rvector;
};



template <typename T=float> class Triangle: public Figure<T>
{
public:
	Triangle(){
		*this >> std::cin;
	}
	Triangle(T point1_x, T point1_y, T point2_x, T point2_y, T point3_x, T point3_y){
		this->point_1.first = point1_x;
		this->point_1.second = point1_y;
		this->point_2.first = point2_x;
		this->point_2.second = point2_y;
		this->point_3.first = point3_x;
		this->point_3.second = point3_y;
	}
	void geometricCenter() override{
		std::pair<T, T> center;
		
		center.first = (point_1.first+point_2.first+point_3.first)/3;
		center.second = (point_1.second+point_2.second+point_3.second)/3;
		std::cout << "Geometric center:" << center.first << " " << center.second << std::endl;
	}
	std::ostream& operator <<(std::ostream& os) override{
		os << "Printing triangle coords" << std::endl <<
		"Coords:   " << "X       " << "Y" << std::endl <<
		"Point one:" << point_1.first << " " << point_1.second << std::endl <<
		"Point two:" << point_2.first << " " << point_2.second << std::endl <<
		"Point three:" << point_3.first << " " << point_3.second << std::endl;
		return os;
	}
	std::istream& operator >>(std::istream& is) override{
		std::cout << "Enter X, Y of points one, two and three:";
		is >> this->point_1.first >> this->point_1.second >>
		this->point_2.first >> this->point_2.second >>
		this->point_3.first >> this->point_3.second;
		return is;
	}
	operator double() override{
		double s;
		double side_1;
		double side_2;
		double side_3;
		double half_perimetr;
		
		side_1 = sqrt(pow(point_1.first-point_2.first, 2)+pow(point_1.second-point_2.second, 2));
		side_2 = sqrt(pow(point_2.first-point_3.first, 2)+pow(point_2.second-point_3.second, 2));
		side_3 = sqrt(pow(point_3.first-point_1.first, 2)+pow(point_3.second-point_1.second, 2));
		half_perimetr = (side_1+side_2+side_3)/2;
		s = sqrt(half_perimetr*(half_perimetr-side_1)*(half_perimetr-side_2)*(half_perimetr-side_3));
		return s;
	}
private:
	std::pair<T, T> point_1;
	std::pair<T, T> point_2;
	std::pair<T, T> point_3;
};



template <typename T=float> class Square: public Figure<T>
{
public:
	Square(){
		*this >> std::cin;
	}
	Square(T point1_x, T point1_y, T side){
		this->point_1.first = point1_x;
		this->point_1.second = point1_y;
		this->side = side;
	}
	void geometricCenter() override{
		std::pair<T, T> center;
		
		center.first = (point_1.first+point_2.first+point_3.first+point_4.first)/4;
		center.second = (point_1.second+point_2.second+point_3.second+point_4.second)/4;
		std::cout << "Geometric center:" << center.first << " " << center.second << std::endl;
	}
	virtual std::ostream& operator <<(std::ostream& os) override{
		os << "Printing square coords" << std::endl <<
		"Coords:   " << "X       " << "Y" << std::endl <<
		"Point one:" << point_1.first << " " << point_1.second << std::endl <<
		"Point two:" << point_2.first << " " << point_2.second << std::endl <<
		"Point three:" << point_3.first << " " << point_3.second << std::endl <<
		"Point four:" << point_4.first << " " << point_4.second << std::endl;
		return os;
	}
	virtual std::istream& operator >>(std::istream& is) override{
		std::cout << "Enter X, Y of left bottom point and length of side:";
		is >> this->point_1.first >> this->point_1.second >> this->side;
		point_2.first = point_1.first+side;
		point_2.second = point_1.second;
		point_3.first = point_1.first+side;
		point_3.second = point_1.second+side;
		point_4.first = point_1.first;
		point_4.second = point_1.second+side;
		return is;
	}
	operator double() override{
		double s;
		s = side*side;
		return s;
	}
private:
	T side;
	std::pair<T, T> point_1;
	std::pair<T, T>point_2;
	std::pair<T, T> point_3;
	std::pair<T, T> point_4;
};

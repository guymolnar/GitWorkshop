#include "Shape.h"

Shape::Shape() : _area(0), _perimeter(0)
{

}

float Shape::get_area(bool has_depth) const //Fixed the func to be with the same name like triangle func
{
	return _area;
}

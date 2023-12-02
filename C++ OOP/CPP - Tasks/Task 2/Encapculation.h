#pragma once

int Point::GetX() {
	return this->x;
}

int Point::GetY() {
	return this->y;
}

void Point::SetX(int x)
{
	if (x > 0)
	{
		this->y = y;
		return;
	}
	assert(!"Wrong x!");
}

void Point::SetY(int y)
{
	if (y > 0)
	{
		this->y = y;
		return;
	}
	assert(!"Wrong y!");
}
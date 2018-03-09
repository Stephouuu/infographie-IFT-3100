#pragma once

#include "AVectorPrimitive.hpp"

/* draw triangle equilateral */
class TriangleVector : public AVectorPrimitive
{
public:
	TriangleVector(void);
	virtual ~TriangleVector(void);

	virtual void invalidate(void);

	void setSize(float size);

private:
	float size_;
};


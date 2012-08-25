#ifndef BOUNDARY_RECTANGLE_H_
#define BOUNDARY_RECTANGLE_H_

#include "boundary_layer.h"

namespace swganh
{
namespace tre
{

	/**
		Boundary rectangle class. It is used to restrict the extent of any of its parent's
		layers.
	*/
	class BoundaryRectangle : public BoundaryLayer
	{
	public:

		virtual void Deserialize(anh::ByteBuffer& buffer);
		virtual bool IsContained(float px, float pz);
		virtual float Process(float px, float pz);
		
	protected:
		float x1, z1, x2, z2;
	};

}
}


#endif
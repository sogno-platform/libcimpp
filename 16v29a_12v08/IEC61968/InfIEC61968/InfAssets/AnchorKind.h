///////////////////////////////////////////////////////////
//  AnchorKind.h
//  Implementation of the Class AnchorKind
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef ANCHORKIND_H
#define ANCHORKIND_H

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfAssets
		{
			/**
			 * Kind of anchor.
			 */
			enum class AnchorKind
			{
				concrete,
				 _undef = -1, 	helix,
				multiHelix,
				rod,
				screw,
				unknown,
				other
			};

		}

	}

}
#endif // ANCHORKIND_H

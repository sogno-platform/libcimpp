///////////////////////////////////////////////////////////
//  MediumKind.h
//  Implementation of the Class MediumKind
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef MEDIUMKIND_H
#define MEDIUMKIND_H

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * Kind of medium.
		 */
		enum class MediumKind
		{
			 _undef = -1, 	air,
			gas,
			liquid,
			mineralOil,
			SF6,
			SF6CF4,
			SF6N2,
			solid
		};

	}

}
#endif // MEDIUMKIND_H

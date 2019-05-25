///////////////////////////////////////////////////////////
//  PoleTreatmentKind.h
//  Implementation of the Class PoleTreatmentKind
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef POLETREATMENTKIND_H
#define POLETREATMENTKIND_H

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfAssets
		{
			/**
			 * Kind of treatment for poles.
			 */
			enum class PoleTreatmentKind
			{
				 _undef = -1, 	full,
				butt,
				natural,
				grayStain,
				greenStain,
				penta,
				unknown,
				other
			};

		}

	}

}
#endif // POLETREATMENTKIND_H

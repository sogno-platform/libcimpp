///////////////////////////////////////////////////////////
//  OilPreservationKind.h
//  Implementation of the Class OilPreservationKind
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef OILPRESERVATIONKIND_H
#define OILPRESERVATIONKIND_H

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfAssetInfo
		{
			/**
			 * Kind of oil preservation.
			 */
			enum class OilPreservationKind
			{
				 _undef = -1, 	freeBreathing,
				nitrogenBlanket,
				conservator,
				other
			};

		}

	}

}
#endif // OILPRESERVATIONKIND_H

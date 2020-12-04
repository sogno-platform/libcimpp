///////////////////////////////////////////////////////////
//  ZoneKind.h
//  Implementation of the Class ZoneKind
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef ZONEKIND_H
#define ZONEKIND_H

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfLocations
		{
			/**
			 * Kind of zone.
			 */
			enum class ZoneKind
			{
				 _undef = -1, 	electricalNetwork,
				specialRestrictionLand,
				weatherZone,
				other
			};

		}

	}

}
#endif // ZONEKIND_H

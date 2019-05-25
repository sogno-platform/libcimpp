///////////////////////////////////////////////////////////
//  DemographicKind.h
//  Implementation of the Class DemographicKind
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef DEMOGRAPHICKIND_H
#define DEMOGRAPHICKIND_H

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfLocations
		{
			/**
			 * Demographic kind of a land property.
			 */
			enum class DemographicKind
			{
				 _undef = -1, 	urban,
				rural,
				other
			};

		}

	}

}
#endif // DEMOGRAPHICKIND_H

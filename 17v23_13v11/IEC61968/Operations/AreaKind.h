///////////////////////////////////////////////////////////
//  AreaKind.h
//  Implementation of the Class AreaKind
//  Original author: Margaret
///////////////////////////////////////////////////////////

#ifndef AREAKIND_H
#define AREAKIND_H

namespace IEC61968
{
	namespace Operations
	{
		/**
		 * Enumeration for the type of area defined; e.g., county, state, parish, zipcode,
		 * etc.
		 */
		enum class AreaKind
		{
			 _undef = -1, 	borough,
			county,
			parish,
			serviceArea,
			state,
			township,
			ward,
			zipcode
		};

	}

}
#endif // AREAKIND_H

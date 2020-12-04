///////////////////////////////////////////////////////////
//  InterruptingMediumKind.h
//  Implementation of the Class InterruptingMediumKind
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef INTERRUPTINGMEDIUMKIND_H
#define INTERRUPTINGMEDIUMKIND_H

namespace IEC61968
{
	namespace AssetInfo
	{
		enum class InterruptingMediumKind
		{
			 _undef = -1, 	airBlast,
			airMagnetic,
			gasTwoPressure,
			gasSinglePressure,
			bulkOil,
			minimumOil,
			vacuum
		};

	}

}
#endif // INTERRUPTINGMEDIUMKIND_H

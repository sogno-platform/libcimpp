///////////////////////////////////////////////////////////
//  TimeIntervalKind.h
//  Implementation of the Class TimeIntervalKind
//  Original author: marga
///////////////////////////////////////////////////////////

#ifndef TIMEINTERVALKIND_H
#define TIMEINTERVALKIND_H

namespace IEC61968
{
	namespace DER
	{
		enum class TimeIntervalKind
		{
			 _undef = -1, 	Y,
			M,
			D,
			h,
			m,
			s
		};

	}

}
#endif // TIMEINTERVALKIND_H

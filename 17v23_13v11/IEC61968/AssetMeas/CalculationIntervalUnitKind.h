///////////////////////////////////////////////////////////
//  CalculationIntervalUnitKind.h
//  Implementation of the Class CalculationIntervalUnitKind
//  Original author: herb
///////////////////////////////////////////////////////////

#ifndef CALCULATIONINTERVALUNITKIND_H
#define CALCULATIONINTERVALUNITKIND_H

namespace IEC61968
{
	namespace AssetMeas
	{
		/**
		 * Units in which calculation interval period is defined.
		 */
		enum class CalculationIntervalUnitKind
		{
			 _undef = -1, 	milliSecond,
			perCycle,
			cycle,
			second,
			minute,
			day,
			hour,
			week,
			month,
			year,
			season
		};

	}

}
#endif // CALCULATIONINTERVALUNITKIND_H

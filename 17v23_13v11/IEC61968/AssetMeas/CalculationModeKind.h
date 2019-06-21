///////////////////////////////////////////////////////////
//  CalculationModeKind.h
//  Implementation of the Class CalculationModeKind
//  Original author: herb
///////////////////////////////////////////////////////////

#ifndef CALCULATIONMODEKIND_H
#define CALCULATIONMODEKIND_H

namespace IEC61968
{
	namespace AssetMeas
	{
		/**
		 * The mode of the calculation (total, periodic, sliding).
		 */
		enum class CalculationModeKind
		{
			 _undef = -1, 	total,
			period,
			sliding
		};

	}

}
#endif // CALCULATIONMODEKIND_H

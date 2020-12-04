///////////////////////////////////////////////////////////
//  CalculationTechniqueKind.h
//  Implementation of the Class CalculationTechniqueKind
//  Original author: herb
///////////////////////////////////////////////////////////

#ifndef CALCULATIONTECHNIQUEKIND_H
#define CALCULATIONTECHNIQUEKIND_H

namespace IEC61968
{
	namespace AssetMeas
	{
		enum class CalculationTechniqueKind
		{
			 _undef = -1, 	trueRMS,
			minimum,
			maximum,
			average
		};

	}

}
#endif // CALCULATIONTECHNIQUEKIND_H

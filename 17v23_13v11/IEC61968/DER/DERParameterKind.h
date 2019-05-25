///////////////////////////////////////////////////////////
//  DERParameterKind.h
//  Implementation of the Class DERParameterKind
//  Original author: marga
///////////////////////////////////////////////////////////

#ifndef DERPARAMETERKIND_H
#define DERPARAMETERKIND_H

namespace IEC61968
{
	namespace DER
	{
		enum class DERParameterKind
		{
			 _undef = -1, 	apparentPower,
			activePower,
			reactivePower,
			highFilterBiDirectionalRegulation,
			lowFilterBiDirectionalRegulation,
			highFilterUpRegulation,
			lowFilterUpRegulation,
			highFilterDownRegulation,
			lowFilterDownRegulation,
			increasingRampRate,
			decreasingRampRate,
			voltage
		};

	}

}
#endif // DERPARAMETERKIND_H

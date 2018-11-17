///////////////////////////////////////////////////////////
//  HydroEnergyConversionKind.h
//  Implementation of the Class HydroEnergyConversionKind
//  Original author: kdd
///////////////////////////////////////////////////////////

#ifndef HYDROENERGYCONVERSIONKIND_H
#define HYDROENERGYCONVERSIONKIND_H

namespace IEC61970
{
	namespace Base
	{
		namespace Generation
		{
			namespace Production
			{
				/**
				 * Specifies the capability of the hydro generating unit to convert energy as a
				 * generator or pump.
				 */
				enum class HydroEnergyConversionKind
				{
					/**
					 * Able to generate power, but not able to pump water for energy storage.
					 */
					 _undef = -1, 	generator,
					/**
					 * Able to both generate power and pump water for energy storage.
					 */
					pumpAndGenerator
				};

			}

		}

	}

}
#endif // HYDROENERGYCONVERSIONKIND_H

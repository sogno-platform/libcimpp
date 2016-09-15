///////////////////////////////////////////////////////////
//  HydroEnergyConversionKind.h
//  Implementation of the Class HydroEnergyConversionKind
//  Created on:      28-Jan-2016 12:45:19
//  Original author: kdd
///////////////////////////////////////////////////////////

#if !defined(EA_F2801A68_A0E9_4a8c_8243_CA2044BCA784__INCLUDED_)
#define EA_F2801A68_A0E9_4a8c_8243_CA2044BCA784__INCLUDED_

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
					generator,
					/**
					 * Able to both generate power and pump water for energy storage.
					 */
					pumpAndGenerator
				};

			}

		}

	}

}
#endif // !defined(EA_F2801A68_A0E9_4a8c_8243_CA2044BCA784__INCLUDED_)

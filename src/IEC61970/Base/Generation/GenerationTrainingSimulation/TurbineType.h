///////////////////////////////////////////////////////////
//  TurbineType.h
//  Implementation of the Class TurbineType
//  Created on:      28-Jan-2016 12:47:27
///////////////////////////////////////////////////////////

#if !defined(EA_F88376E3_0149_4998_BD1B_8DB5B61AE12D__INCLUDED_)
#define EA_F88376E3_0149_4998_BD1B_8DB5B61AE12D__INCLUDED_

namespace IEC61970
{
	namespace Base
	{
		namespace Generation
		{
			namespace GenerationTrainingSimulation
			{
				/**
				 * Type of turbine.
				 */
				enum class TurbineType
				{
					/**
					 * Francis.
					 */
					francis,
					/**
					 * Pelton.
					 */
					pelton,
					/**
					 * Kaplan.
					 */
					kaplan
				};

			}

		}

	}

}
#endif // !defined(EA_F88376E3_0149_4998_BD1B_8DB5B61AE12D__INCLUDED_)

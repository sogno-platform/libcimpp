///////////////////////////////////////////////////////////
//  BoilerControlMode.h
//  Implementation of the Class BoilerControlMode
//  Created on:      28-Jan-2016 12:43:28
///////////////////////////////////////////////////////////

#if !defined(EA_60A8C420_C216_44fc_945C_ECFE9FE7C542__INCLUDED_)
#define EA_60A8C420_C216_44fc_945C_ECFE9FE7C542__INCLUDED_

namespace IEC61970
{
	namespace Base
	{
		namespace Generation
		{
			namespace GenerationTrainingSimulation
			{
				/**
				 * Boiler control mode.
				 */
				enum class BoilerControlMode
				{
					/**
					 * Following.
					 */
					following,
					/**
					 * Coordinated.
					 */
					coordinated
				};

			}

		}

	}

}
#endif // !defined(EA_60A8C420_C216_44fc_945C_ECFE9FE7C542__INCLUDED_)

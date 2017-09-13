///////////////////////////////////////////////////////////
//  BoilerControlMode.h
//  Implementation of the Class BoilerControlMode
///////////////////////////////////////////////////////////

#ifndef BOILERCONTROLMODE_H
#define BOILERCONTROLMODE_H

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
#endif // BOILERCONTROLMODE_H

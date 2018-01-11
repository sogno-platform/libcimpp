///////////////////////////////////////////////////////////
//  GeneratorControlMode.h
//  Implementation of the Class GeneratorControlMode
///////////////////////////////////////////////////////////

#ifndef GENERATORCONTROLMODE_H
#define GENERATORCONTROLMODE_H

namespace IEC61970
{
	namespace Base
	{
		namespace Generation
		{
			namespace Production
			{
				/**
				 * Unit control modes.
				 */
				enum class GeneratorControlMode
				{
					/**
					 * Setpoint control mode.
					 */
					 _undef = -1, 	setpoint,
					/**
					 * Pulse control mode.
					 */
					pulse
				};

			}

		}

	}

}
#endif // GENERATORCONTROLMODE_H

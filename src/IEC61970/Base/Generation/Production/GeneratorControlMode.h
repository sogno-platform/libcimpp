///////////////////////////////////////////////////////////
//  GeneratorControlMode.h
//  Implementation of the Class GeneratorControlMode
//  Created on:      28-Jan-2016 12:44:56
///////////////////////////////////////////////////////////

#if !defined(EA_767C3C99_5195_48ad_BD67_B9D72AED625F__INCLUDED_)
#define EA_767C3C99_5195_48ad_BD67_B9D72AED625F__INCLUDED_

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
					setpoint,
					/**
					 * Pulse control mode.
					 */
					pulse
				};

			}

		}

	}

}
#endif // !defined(EA_767C3C99_5195_48ad_BD67_B9D72AED625F__INCLUDED_)

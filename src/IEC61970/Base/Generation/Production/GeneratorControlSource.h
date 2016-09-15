///////////////////////////////////////////////////////////
//  GeneratorControlSource.h
//  Implementation of the Class GeneratorControlSource
//  Created on:      28-Jan-2016 12:44:56
///////////////////////////////////////////////////////////

#if !defined(EA_C2C4853E_2EC7_4f66_9ABA_42169A2F82EA__INCLUDED_)
#define EA_C2C4853E_2EC7_4f66_9ABA_42169A2F82EA__INCLUDED_

namespace IEC61970
{
	namespace Base
	{
		namespace Generation
		{
			namespace Production
			{
				/**
				 * The source of controls for a generating unit.
				 */
				enum class GeneratorControlSource
				{
					/**
					 * Not available.
					 */
					unavailable,
					/**
					 * Off of automatic generation control (AGC).
					 */
					offAGC,
					/**
					 * On automatic generation control (AGC).
					 */
					onAGC,
					/**
					 * Plant is controlling.
					 */
					plantControl
				};

			}

		}

	}

}
#endif // !defined(EA_C2C4853E_2EC7_4f66_9ABA_42169A2F82EA__INCLUDED_)

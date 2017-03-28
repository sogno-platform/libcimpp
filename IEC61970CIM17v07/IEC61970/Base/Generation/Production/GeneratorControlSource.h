///////////////////////////////////////////////////////////
//  GeneratorControlSource.h
//  Implementation of the Class GeneratorControlSource
///////////////////////////////////////////////////////////

#ifndef GENERATORCONTROLSOURCE_H
#define GENERATORCONTROLSOURCE_H

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
#endif // GENERATORCONTROLSOURCE_H

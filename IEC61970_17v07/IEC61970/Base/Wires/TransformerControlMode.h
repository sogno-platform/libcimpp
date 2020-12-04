///////////////////////////////////////////////////////////
//  TransformerControlMode.h
//  Implementation of the Class TransformerControlMode
///////////////////////////////////////////////////////////

#ifndef TRANSFORMERCONTROLMODE_H
#define TRANSFORMERCONTROLMODE_H

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * Control modes for a transformer.
			 */
			enum class TransformerControlMode
			{
				/**
				 * Voltage control
				 */
				 _undef = -1, 	volt,
				/**
				 * Reactive power flow control
				 */
				reactive
			};

		}

	}

}
#endif // TRANSFORMERCONTROLMODE_H

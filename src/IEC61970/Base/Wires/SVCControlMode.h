///////////////////////////////////////////////////////////
//  SVCControlMode.h
//  Implementation of the Class SVCControlMode
///////////////////////////////////////////////////////////

#ifndef SVCCONTROLMODE_H
#define SVCCONTROLMODE_H

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * Static VAr Compensator control mode.
			 */
			enum class SVCControlMode
			{
				reactivePower,
				voltage
			};

		}

	}

}
#endif // SVCCONTROLMODE_H

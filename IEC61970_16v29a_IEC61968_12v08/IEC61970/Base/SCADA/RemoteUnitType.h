///////////////////////////////////////////////////////////
//  RemoteUnitType.h
//  Implementation of the Class RemoteUnitType
///////////////////////////////////////////////////////////

#ifndef REMOTEUNITTYPE_H
#define REMOTEUNITTYPE_H

namespace IEC61970
{
	namespace Base
	{
		namespace SCADA
		{
			/**
			 * Type of remote unit.
			 */
			enum class RemoteUnitType
			{
				/**
				 * Remote terminal unit.
				 */
				 _undef = -1, 	RTU,
				/**
				 * Substation control system.
				 */
				SubstationControlSystem,
				/**
				 * Control center.
				 */
				ControlCenter,
				/**
				 * Intelligent electronic device (IED).
				 */
				IED
			};

		}

	}

}
#endif // REMOTEUNITTYPE_H

///////////////////////////////////////////////////////////
//  ComDirectionKind.h
//  Implementation of the Class ComDirectionKind
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef COMDIRECTIONKIND_H
#define COMDIRECTIONKIND_H

namespace IEC61968
{
	namespace Metering
	{
		/**
		 * Kind of communication direction.
		 */
		enum class ComDirectionKind
		{
			/**
			 * Communication is from device.
			 */
			 _undef = -1, 	fromDevice,
			/**
			 * Communication is to device.
			 */
			toDevice,
			/**
			 * Communication with the device is bi-directional.
			 */
			biDirectional
		};

	}

}
#endif // COMDIRECTIONKIND_H

///////////////////////////////////////////////////////////
//  EndDeviceEventDetail.h
//  Implementation of the Class EndDeviceEventDetail
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef ENDDEVICEEVENTDETAIL_H
#define ENDDEVICEEVENTDETAIL_H

#include "BaseClass.h"
#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Domain/StringQuantity.h"

namespace IEC61968
{
	namespace Metering
	{
		/**
		 * Name-value pair, specific to end device events.
		 */
		class EndDeviceEventDetail : public BaseClass
		{

		public:
			EndDeviceEventDetail();
			virtual ~EndDeviceEventDetail();
			/**
			 * Name.
			 */
			IEC61970::Base::Domain::String name;
			/**
			 * Value, including unit information.
			 */
			IEC61970::Base::Domain::StringQuantity value;

		};

	}

}
#endif // ENDDEVICEEVENTDETAIL_H

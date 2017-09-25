///////////////////////////////////////////////////////////
//  EndDeviceControlType.h
//  Implementation of the Class EndDeviceControlType
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef ENDDEVICECONTROLTYPE_H
#define ENDDEVICECONTROLTYPE_H

#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61968
{
	namespace Metering
	{
		/**
		 * Detailed description for a control produced by an end device. Values in
		 * attributes allow for creation of recommended codes to be used for identifying
		 * end device controls as follows: <type>.<domain>.<subDomain>.<eventOrAction>.
		 */
		class EndDeviceControlType : public IEC61970::Base::Core::IdentifiedObject
		{

		public:
			EndDeviceControlType();
			virtual ~EndDeviceControlType();
			/**
			 * High-level nature of the control.
			 */
			IEC61970::Base::Domain::String domain;
			/**
			 * The most specific part of this control type. It is mainly in the form of a verb
			 * that gives action to the control that just occurred.
			 */
			IEC61970::Base::Domain::String eventOrAction;
			/**
			 * More specific nature of the control, as a further sub-categorisation of
			 * 'domain'.
			 */
			IEC61970::Base::Domain::String subDomain;
			/**
			 * Type of physical device from which the control was created. A value of zero (0)
			 * can be used when the source is unknown.
			 */
			IEC61970::Base::Domain::String type;

		};

	}

}
#endif // ENDDEVICECONTROLTYPE_H

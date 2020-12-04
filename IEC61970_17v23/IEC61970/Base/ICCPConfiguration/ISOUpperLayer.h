///////////////////////////////////////////////////////////
//  ISOUpperLayer.h
//  Implementation of the Class ISOUpperLayer
//  Original author: selaost1
///////////////////////////////////////////////////////////

#ifndef ISOUPPERLAYER_H
#define ISOUPPERLAYER_H

#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/ICCPConfiguration/TCPAccessPoint.h"

namespace IEC61970
{
	namespace Base
	{
		namespace ICCPConfiguration
		{
			class ISOUpperLayer : public IEC61970::Base::ICCPConfiguration::TCPAccessPoint
			{

			public:
				ISOUpperLayer();
				virtual ~ISOUpperLayer();
				IEC61970::Base::Domain::Integer aeInvoke;
				/**
				 * Is the AE qualifier and represents further application level addressing
				 * information.
				 */
				IEC61970::Base::Domain::Integer aeQual;
				/**
				 * Is a further application level OSI addressing parameter.
				 */
				IEC61970::Base::Domain::Integer apInvoke;
				/**
				 * Is a sequence of integer strings separated by ".".  The value, in conjunction
				 * with other application addressing attributes (e.g. other APs) are used to
				 * select a specific application (e.g. the ICCP application entity) per the OSI
				 * reference model.  The sequence, and its values, represent a namespace whose
				 * values are governed by ISO/IEC 7498-3.
				 */
				IEC61970::Base::Domain::String apTitle;
				/**
				 * Is the addressing selector for OSI presentation addressing.
				 */
				IEC61970::Base::Domain::String osiPsel;
				/**
				 * Is the OSI session layer addressing information.
				 */
				IEC61970::Base::Domain::String osiSsel;
				/**
				 * Is the OSI Transport Layer addressing information.
				 */
				IEC61970::Base::Domain::String osiTsel;

			};

		}

	}

}
#endif // ISOUPPERLAYER_H

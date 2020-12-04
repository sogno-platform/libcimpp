///////////////////////////////////////////////////////////
//  IOPoint.h
//  Implementation of the Class IOPoint
//  Original author: SELAOST1
///////////////////////////////////////////////////////////

#ifndef IOPOINT_H
#define IOPOINT_H

#include <list>

#include "IEC61970/Base/Core/IdentifiedObject.h"
#include "IEC61970/Base/ICCPConfiguration/ProvidedBilateralPoint.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Meas
		{
			/**
			 * The class describe a measurement or control value. The purpose is to enable
			 * having attributes and associations common for measurement and control.
			 */
			class IOPoint : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				IOPoint();
				virtual ~IOPoint();
				std::list<IEC61970::Base::ICCPConfiguration::ProvidedBilateralPoint*> BilateralToIOPoint;

			};

		}

	}

}
#endif // IOPOINT_H

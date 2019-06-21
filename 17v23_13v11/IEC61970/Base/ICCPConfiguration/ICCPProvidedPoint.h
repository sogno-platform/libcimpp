///////////////////////////////////////////////////////////
//  ICCPProvidedPoint.h
//  Implementation of the Class ICCPProvidedPoint
//  Original author: SELAOST1
///////////////////////////////////////////////////////////

#ifndef ICCPPROVIDEDPOINT_H
#define ICCPPROVIDEDPOINT_H

#include "IEC61970/Base/ICCPConfiguration/ICCPAccessPrivilegeKind.h"
#include "IEC61970/Base/ICCPConfiguration/ICCPQualityKind.h"
#include "IEC61970/Base/ICCPConfiguration/ICCPPointKind.h"
#include "IEC61970/Base/ICCPConfiguration/ICCPScope.h"
#include "IEC61970/Base/ICCPConfiguration/ProvidedBilateralPoint.h"

namespace IEC61970
{
	namespace Base
	{
		namespace ICCPConfiguration
		{
			/**
			 * The IdentifiedObject.name attribute must have a value.  The name attribute
			 * shall be used as the DataValue name used for the exchange.
			 */
			class ICCPProvidedPoint : public IEC61970::Base::ICCPConfiguration::ProvidedBilateralPoint
			{

			public:
				ICCPProvidedPoint();
				virtual ~ICCPProvidedPoint();
				/**
				 * Provides information regarding the access privileges allowed to the ICCP Point.
				 */
				IEC61970::Base::ICCPConfiguration::ICCPAccessPrivilegeKind accessPriviledge = IEC61970::Base::ICCPConfiguration::ICCPAccessPrivilegeKind::_undef;
				/**
				 * Specifies the type of ICCP quality that will be conveyed as part of the ICCP
				 * Point.
				 */
				IEC61970::Base::ICCPConfiguration::ICCPQualityKind pointQuality = IEC61970::Base::ICCPConfiguration::ICCPQualityKind::_undef;
				/**
				 * Indicates the ICCP Point type that is to be conveyed.
				 * 
				 * A CIM AccumlatorValue  shall be mapped to an ICCP real.
				 * A CIM AnalogValue shall be mapped to an ICCP real.
				 * A CIM DiscreteValue shall be mapped to either an ICCP real, state,
				 * stateSupplemental, or either protection event type.
				 * A CIM StringMeasurementValue does not have a standardized mapping.
				 */
				IEC61970::Base::ICCPConfiguration::ICCPPointKind pointType = IEC61970::Base::ICCPConfiguration::ICCPPointKind::_undef;
				IEC61970::Base::ICCPConfiguration::ICCPScope scope = IEC61970::Base::ICCPConfiguration::ICCPScope::_undef;

			};

		}

	}

}
#endif // ICCPPROVIDEDPOINT_H

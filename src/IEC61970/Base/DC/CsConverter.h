///////////////////////////////////////////////////////////
//  CsConverter.h
//  Implementation of the Class CsConverter
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef CSCONVERTER_H
#define CSCONVERTER_H

#include "IEC61970/Base/Domain/AngleDegrees.h"
#include "IEC61970/Base/Domain/CurrentFlow.h"
#include "IEC61970/Base/DC/CsOperatingModeKind.h"
#include "IEC61970/Base/DC/CsPpccControlKind.h"
#include "IEC61970/Base/DC/ACDCConverter.h"

namespace IEC61970
{
	namespace Base
	{
		namespace DC
		{
			/**
			 * DC side of the current source converter (CSC).
			 */
			class CsConverter : public IEC61970::Base::DC::ACDCConverter
			{

			public:
				CsConverter();
				virtual ~CsConverter();
				/**
				 * Firing angle, typical value between 10 and 18 degrees for a rectifier. CSC
				 * state variable, result from power flow.
				 */
				IEC61970::Base::Domain::AngleDegrees alpha;
				/**
				 * Extinction angle. CSC state variable, result from power flow.
				 */
				IEC61970::Base::Domain::AngleDegrees gamma;
				/**
				 * Maximum firing angle. CSC configuration data used in power flow.
				 */
				IEC61970::Base::Domain::AngleDegrees maxAlpha;
				/**
				 * Maximum extinction angle. CSC configuration data used in power flow.
				 */
				IEC61970::Base::Domain::AngleDegrees maxGamma;
				/**
				 * The maximum direct current (Id) on the DC side at which the converter should
				 * operate. Converter configuration data use in power flow.
				 */
				IEC61970::Base::Domain::CurrentFlow maxIdc;
				/**
				 * Minimum firing angle. CSC configuration data used in power flow.
				 */
				IEC61970::Base::Domain::AngleDegrees minAlpha;
				/**
				 * Minimum extinction angle. CSC configuration data used in power flow.
				 */
				IEC61970::Base::Domain::AngleDegrees minGamma;
				/**
				 * The minimum direct current (Id) on the DC side at which the converter should
				 * operate. CSC configuration data used in power flow.
				 */
				IEC61970::Base::Domain::CurrentFlow minIdc;
				/**
				 * Indicates whether the DC pole is operating as an inverter or as a rectifier.
				 * CSC control variable used in power flow.
				 */
				IEC61970::Base::DC::CsOperatingModeKind operatingMode;
				IEC61970::Base::DC::CsPpccControlKind pPccControl;
				/**
				 * Rated converter DC current, also called IdN. Converter configuration data used
				 * in power flow.
				 */
				IEC61970::Base::Domain::CurrentFlow ratedIdc;
				/**
				 * Target firing angle. CSC control variable used in power flow.
				 */
				IEC61970::Base::Domain::AngleDegrees targetAlpha;
				/**
				 * Target extinction angle. CSC  control variable used in power flow.
				 */
				IEC61970::Base::Domain::AngleDegrees targetGamma;
				/**
				 * DC current target value. CSC control variable used in power flow.
				 */
				IEC61970::Base::Domain::CurrentFlow targetIdc;

			};

		}

	}

}
#endif // CSCONVERTER_H

///////////////////////////////////////////////////////////
//  WindingInsulation.h
//  Implementation of the Class WindingInsulation
///////////////////////////////////////////////////////////

#ifndef WINDINGINSULATION_H
#define WINDINGINSULATION_H

#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Domain/Reactance.h"
#include "IEC61968/Common/Status.h"
#include "IEC61970/Base/Wires/TransformerEnd.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfAssets
		{
			/**
			 * Winding insulation condition as a result of a test.
			 */
			class WindingInsulation : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				WindingInsulation();
				virtual ~WindingInsulation();
				/**
				 * Status of Winding Insulation Power Factor as of statusDate: Acceptable, Minor
				 * Deterioration or Moisture Absorption, Major Deterioration or Moisture
				 * Absorption, Failed.
				 */
				IEC61970::Base::Domain::String insulationPFStatus;
				/**
				 * For testType, status of Winding Insulation Resistance as of statusDate. Typical
				 * values are: Acceptable, Questionable, Failed.
				 */
				IEC61970::Base::Domain::String insulationResistance;
				/**
				 * As of statusDate, the leakage reactance measured at the "from" winding with the
				 * "to" winding short-circuited and all other windings open-circuited.
				 */
				IEC61970::Base::Domain::Reactance leakageReactance;
				IEC61968::Common::Status status;
				IEC61970::Base::Wires::TransformerEnd *ToWinding;
				IEC61970::Base::Wires::TransformerEnd *FromWinding;

			};

		}

	}

}
#endif // WINDINGINSULATION_H

///////////////////////////////////////////////////////////
//  BushingInsulationPF.h
//  Implementation of the Class BushingInsulationPF
///////////////////////////////////////////////////////////

#ifndef BUSHINGINSULATIONPF_H
#define BUSHINGINSULATIONPF_H

#include "IEC61968/Common/Status.h"
#include "IEC61968/InfIEC61968/InfAssets/BushingInsulationPfTestKind.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"
#include "IEC61968/InfIEC61968/InfAssets/TransformerObservation.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfAssets
		{
			/**
			 * Bushing insulation power factor condition as a result of a test.
			 * Typical status values are: Acceptable, Minor Deterioration or Moisture
			 * Absorption, Major Deterioration or Moisture Absorption, Failed.
			 */
			class BushingInsulationPF : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				BushingInsulationPF();
				virtual ~BushingInsulationPF();
				IEC61968::Common::Status status;
				/**
				 * Kind of test for this bushing.
				 */
				IEC61968::InfIEC61968::InfAssets::BushingInsulationPfTestKind testKind;
				IEC61968::InfIEC61968::InfAssets::TransformerObservation *TransformerObservation;

			};

		}

	}

}
#endif // BUSHINGINSULATIONPF_H

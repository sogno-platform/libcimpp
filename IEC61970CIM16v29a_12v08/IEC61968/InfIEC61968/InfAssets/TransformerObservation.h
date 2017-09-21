///////////////////////////////////////////////////////////
//  TransformerObservation.h
//  Implementation of the Class TransformerObservation
///////////////////////////////////////////////////////////

#ifndef TRANSFORMEROBSERVATION_H
#define TRANSFORMEROBSERVATION_H

#include <list>

#include "IEC61970/Base/Domain/Temperature.h"
#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Domain/Voltage.h"
#include "IEC61968/Common/Status.h"
#include "IEC61970/Base/Wires/TransformerTank.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"
#include "IEC61968/InfIEC61968/InfAssets/WindingInsulation.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfAssets
		{
			/**
			 * Common information captured during transformer inspections and/or diagnostics.
			 * Note that some properties may be measured through other means and therefore
			 * have measurement values in addition to the observed values recorded here.
			 */
			class TransformerObservation : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				TransformerObservation();
				virtual ~TransformerObservation();
				/**
				 * Bushing temperature.
				 */
				IEC61970::Base::Domain::Temperature bushingTemp;
				/**
				 * Dissolved Gas Analysis. Typical values are: Acceptable, Overheating, Corona,
				 * Sparking, Arcing.
				 */
				IEC61970::Base::Domain::String dga;
				/**
				 * Frequency Response Analysis. Typical values are: acceptable, slight movement,
				 * significant movement, failed, near failure. A graphic of the response diagram,
				 * which is a type of document, may be associated with this analysis through the
				 * recursive document relationship of the ProcedureDataSet.
				 */
				IEC61970::Base::Domain::String freqResp;
				/**
				 * Overall measure of furfural in oil and mechanical strength of paper. DP, the
				 * degree of polymerization, is the strength of the paper. Furfural is a measure
				 * of furfural compounds, often expressed in parts per million.
				 */
				IEC61970::Base::Domain::String furfuralDP;
				/**
				 * Hotspot oil temperature.
				 */
				IEC61970::Base::Domain::Temperature hotSpotTemp;
				/**
				 * Oil Quality Analysis-Color.
				 */
				IEC61970::Base::Domain::String oilColor;
				/**
				 * Oil Quality Analysis-Dielectric Strength.
				 */
				IEC61970::Base::Domain::Voltage oilDielectricStrength;
				/**
				 * Oil Quality Analysis- inter facial tension (IFT) - number-Dynes/CM.
				 */
				IEC61970::Base::Domain::String oilIFT;
				/**
				 * The level of oil in the transformer.
				 */
				IEC61970::Base::Domain::String oilLevel;
				/**
				 * Oil Quality Analysis-Neutralization Number - Number - Mg KOH.
				 */
				IEC61970::Base::Domain::String oilNeutralizationNumber;
				/**
				 * Pump vibration, with typical values being: nominal, high.
				 */
				IEC61970::Base::Domain::String pumpVibration;
				IEC61968::Common::Status status;
				/**
				 * Top oil temperature.
				 */
				IEC61970::Base::Domain::Temperature topOilTemp;
				/**
				 * Water Content expressed in parts per million.
				 */
				IEC61970::Base::Domain::String waterContent;
				IEC61970::Base::Wires::TransformerTank *Transformer;
				std::list<IEC61968::InfIEC61968::InfAssets::WindingInsulation*> WindingInsulationPFs;

			};

		}

	}

}
#endif // TRANSFORMEROBSERVATION_H

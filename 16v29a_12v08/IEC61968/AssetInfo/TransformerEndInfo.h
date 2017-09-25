///////////////////////////////////////////////////////////
//  TransformerEndInfo.h
//  Implementation of the Class TransformerEndInfo
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef TRANSFORMERENDINFO_H
#define TRANSFORMERENDINFO_H

#include <list>

#include "IEC61970/Base/Wires/WindingConnection.h"
#include "IEC61970/Base/Domain/ApparentPower.h"
#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61970/Base/Domain/Voltage.h"
#include "IEC61970/Base/Domain/Resistance.h"
#include "IEC61970/Base/Wires/TransformerCoreAdmittance.h"
#include "IEC61970/Base/Wires/TransformerMeshImpedance.h"
#include "IEC61970/Base/Wires/TransformerStarImpedance.h"
#include "IEC61968/Assets/AssetInfo.h"

namespace IEC61968
{
	namespace AssetInfo
	{
		/**
		 * Transformer end data.
		 */
		class TransformerEndInfo : public IEC61968::Assets::AssetInfo
		{

		public:
			TransformerEndInfo();
			virtual ~TransformerEndInfo();
			/**
			 * Kind of connection.
			 */
			IEC61970::Base::Wires::WindingConnection connectionKind;
			/**
			 * Apparent power that the winding can carry under emergency conditions (also
			 * called long-term emergency power).
			 */
			IEC61970::Base::Domain::ApparentPower emergencyS;
			/**
			 * Number for this transformer end, corresponding to the end's order in the
			 * PowerTransformer.vectorGroup attribute. Highest voltage winding should be 1.
			 */
			IEC61970::Base::Domain::Integer endNumber;
			/**
			 * Basic insulation level voltage rating.
			 */
			IEC61970::Base::Domain::Voltage insulationU;
			/**
			 * Winding phase angle where 360 degrees are represented with clock hours, so the
			 * valid values are {0, ..., 11}. For example, to express the second winding in
			 * code 'Dyn11', set attributes as follows: 'endNumber'=2, 'connectionKind' = Yn
			 * and 'phaseAngleClock' = 11.
			 */
			IEC61970::Base::Domain::Integer phaseAngleClock;
			/**
			 * DC resistance.
			 */
			IEC61970::Base::Domain::Resistance r;
			/**
			 * Normal apparent power rating.
			 */
			IEC61970::Base::Domain::ApparentPower ratedS;
			/**
			 * Rated voltage: phase-phase for three-phase windings, and either phase-phase or
			 * phase-neutral for single-phase windings.
			 */
			IEC61970::Base::Domain::Voltage ratedU;
			/**
			 * Apparent power that this winding can carry for a short period of time (in
			 * emergency).
			 */
			IEC61970::Base::Domain::ApparentPower shortTermS;
			/**
			 * Core admittance calculated from this transformer end datasheet, representing
			 * magnetising current and core losses. The full values of the transformer should
			 * be supplied for one transformer end info only.
			 */
			IEC61970::Base::Wires::TransformerCoreAdmittance *CoreAdmittance;
			/**
			 * All mesh impedances between this 'to' and other 'from' transformer ends.
			 */
			std::list<IEC61970::Base::Wires::TransformerMeshImpedance*> FromMeshImpedances;
			/**
			 * Transformer star impedance calculated from this transformer end datasheet.
			 */
			IEC61970::Base::Wires::TransformerStarImpedance *TransformerStarImpedance;
			/**
			 * All mesh impedances between this 'from' and other 'to' transformer ends.
			 */
			std::list<IEC61970::Base::Wires::TransformerMeshImpedance*> ToMeshImpedances;

		};

	}

}
#endif // TRANSFORMERENDINFO_H

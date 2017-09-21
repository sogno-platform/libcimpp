///////////////////////////////////////////////////////////
//  GeneratorTypeAsset.h
//  Implementation of the Class GeneratorTypeAsset
///////////////////////////////////////////////////////////

#ifndef GENERATORTYPEASSET_H
#define GENERATORTYPEASSET_H

#include "IEC61970/Base/Domain/ActivePower.h"
#include "IEC61970/Base/Domain/ReactivePower.h"
#include "IEC61970/Base/Domain/Resistance.h"
#include "IEC61970/Base/Domain/Reactance.h"
#include "IEC61968/InfIEC61968/InfAssets/GenericAssetModelOrMaterial.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfTypeAsset
		{
			/**
			 * Generic generation equipment that may be used for various purposes such as work
			 * planning. It defines both the Real and Reactive power properties (modelled at
			 * the PSR level as a GeneratingUnit + SynchronousMachine).
			 */
			class GeneratorTypeAsset : public IEC61968::InfIEC61968::InfAssets::GenericAssetModelOrMaterial
			{

			public:
				GeneratorTypeAsset();
				virtual ~GeneratorTypeAsset();
				/**
				 * Maximum real power limit.
				 */
				IEC61970::Base::Domain::ActivePower maxP;
				/**
				 * Maximum reactive power limit.
				 */
				IEC61970::Base::Domain::ReactivePower maxQ;
				/**
				 * Minimum real power generated.
				 */
				IEC61970::Base::Domain::ActivePower minP;
				/**
				 * Minimum reactive power generated.
				 */
				IEC61970::Base::Domain::ReactivePower minQ;
				/**
				 * Direct-axis subtransient resistance.
				 */
				IEC61970::Base::Domain::Resistance rDirectSubtrans;
				/**
				 * Direct-axis synchronous resistance.
				 */
				IEC61970::Base::Domain::Resistance rDirectSync;
				/**
				 * Direct-axis transient resistance.
				 */
				IEC61970::Base::Domain::Resistance rDirectTrans;
				/**
				 * Quadrature-axis subtransient resistance.
				 */
				IEC61970::Base::Domain::Resistance rQuadSubtrans;
				/**
				 * Quadrature-axis synchronous resistance.
				 */
				IEC61970::Base::Domain::Resistance rQuadSync;
				/**
				 * Quadrature-axis transient resistance.
				 */
				IEC61970::Base::Domain::Resistance rQuadTrans;
				/**
				 * Direct-axis subtransient reactance.
				 */
				IEC61970::Base::Domain::Reactance xDirectSubtrans;
				/**
				 * Direct-axis synchronous reactance.
				 */
				IEC61970::Base::Domain::Reactance xDirectSync;
				/**
				 * Direct-axis transient reactance.
				 */
				IEC61970::Base::Domain::Reactance xDirectTrans;
				/**
				 * Quadrature-axis subtransient reactance.
				 */
				IEC61970::Base::Domain::Reactance xQuadSubtrans;
				/**
				 * Quadrature-axis synchronous reactance.
				 */
				IEC61970::Base::Domain::Reactance xQuadSync;
				/**
				 * Quadrature-axis transient reactance.
				 */
				IEC61970::Base::Domain::Reactance xQuadTrans;

			};

		}

	}

}
#endif // GENERATORTYPEASSET_H

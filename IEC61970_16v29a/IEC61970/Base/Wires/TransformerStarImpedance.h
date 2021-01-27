///////////////////////////////////////////////////////////
//  TransformerStarImpedance.h
//  Implementation of the Class TransformerStarImpedance
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef TRANSFORMERSTARIMPEDANCE_H
#define TRANSFORMERSTARIMPEDANCE_H

#include "IEC61970/Base/Domain/Resistance.h"
#include "IEC61970/Base/Domain/Reactance.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * Transformer star impedance (Pi-model) that accurately reflects impedance for
			 * transformers with 2 or 3 windings. For transformers with 4 or more windings,
			 * you must use TransformerMeshImpedance class.
			 * For transmission networks use PowerTransformerEnd impedances (r, r0, x, x0, b,
			 * b0, g and g0).
			 */
			class TransformerStarImpedance : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				TransformerStarImpedance();
				virtual ~TransformerStarImpedance();
				/**
				 * Resistance of the transformer end.
				 */
				IEC61970::Base::Domain::Resistance r;
				/**
				 * Zero sequence series resistance of the transformer end.
				 */
				IEC61970::Base::Domain::Resistance r0;
				/**
				 * Positive sequence series reactance of the transformer end.
				 */
				IEC61970::Base::Domain::Reactance x;
				/**
				 * Zero sequence series reactance of the transformer end.
				 */
				IEC61970::Base::Domain::Reactance x0;

			};

		}

	}

}
#endif // TRANSFORMERSTARIMPEDANCE_H

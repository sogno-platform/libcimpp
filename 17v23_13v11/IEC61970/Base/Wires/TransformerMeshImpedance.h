///////////////////////////////////////////////////////////
//  TransformerMeshImpedance.h
//  Implementation of the Class TransformerMeshImpedance
//  Original author: LOO
///////////////////////////////////////////////////////////

#ifndef TRANSFORMERMESHIMPEDANCE_H
#define TRANSFORMERMESHIMPEDANCE_H

#include <list>

#include "IEC61970/Base/Domain/Resistance.h"
#include "IEC61970/Base/Domain/Reactance.h"
#include "IEC61970/Base/Wires/TransformerEnd.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * Transformer mesh impedance (Delta-model) between transformer ends.
			 * The typical case is that this class describes the impedance between two
			 * transformer ends pair-wise, i.e. the cardinalities at both tranformer end
			 * associations are 1. But in cases where two or more transformer ends are modeled
			 * the cardinalities are larger than 1.
			 */
			class TransformerMeshImpedance : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				TransformerMeshImpedance();
				virtual ~TransformerMeshImpedance();
				/**
				 * Resistance between the 'from' and the 'to' end, seen from the 'from' end.
				 */
				IEC61970::Base::Domain::Resistance r;
				/**
				 * Zero-sequence resistance between the 'from' and the 'to' end, seen from the
				 * 'from' end.
				 */
				IEC61970::Base::Domain::Resistance r0;
				/**
				 * Reactance between the 'from' and the 'to' end, seen from the 'from' end.
				 */
				IEC61970::Base::Domain::Reactance x;
				/**
				 * Zero-sequence reactance between the 'from' and the 'to' end, seen from the
				 * 'from' end.
				 */
				IEC61970::Base::Domain::Reactance x0;
				/**
				 * All transformer ends this mesh impedance is connected to.
				 */
				std::list<IEC61970::Base::Wires::TransformerEnd*> ToTransformerEnd;
				/**
				 * From end this mesh impedance is connected to. It determines the voltage
				 * reference.
				 */
				IEC61970::Base::Wires::TransformerEnd *FromTransformerEnd;

			};

		}

	}

}
#endif // TRANSFORMERMESHIMPEDANCE_H

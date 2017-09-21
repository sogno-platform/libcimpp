///////////////////////////////////////////////////////////
//  TransformerTankEnd.h
//  Implementation of the Class TransformerTankEnd
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef TRANSFORMERTANKEND_H
#define TRANSFORMERTANKEND_H

#include "IEC61970/Base/Core/PhaseCode.h"
#include "IEC61970/Base/Wires/TransformerEnd.h"
#include "IEC61970/Base/Wires/TransformerTank.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * Transformer tank end represents an individual winding for unbalanced models or
			 * for transformer tanks connected into a bank (and bank is modelled with the
			 * PowerTransformer).
			 */
			class TransformerTankEnd : public IEC61970::Base::Wires::TransformerEnd
			{

			public:
				TransformerTankEnd();
				virtual ~TransformerTankEnd();
				/**
				 * Describes the phases carried by a conducting equipment.
				 */
				IEC61970::Base::Core::PhaseCode phases;
				/**
				 * Transformer this winding belongs to.
				 */
				IEC61970::Base::Wires::TransformerTank *TransformerTank;

			};

		}

	}

}
#endif // TRANSFORMERTANKEND_H

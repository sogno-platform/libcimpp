///////////////////////////////////////////////////////////
//  TransformerTank.h
//  Implementation of the Class TransformerTank
//  Original author: Tom
///////////////////////////////////////////////////////////

#ifndef TRANSFORMERTANK_H
#define TRANSFORMERTANK_H

#include "IEC61970/Base/Wires/PowerTransformer.h"
#include "IEC61970/Base/Core/Equipment.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * An assembly of two or more coupled windings that transform electrical power
			 * between voltage levels. These windings are bound on a common core and place in
			 * the same tank. Transformer tank can be used to model both single-phase and 3-
			 * phase transformers.
			 */
			class TransformerTank : public IEC61970::Base::Core::Equipment
			{

			public:
				TransformerTank();
				virtual ~TransformerTank();
				/**
				 * Bank this transformer belongs to.
				 */
				IEC61970::Base::Wires::PowerTransformer *PowerTransformer;

			};

		}

	}

}
#endif // TRANSFORMERTANK_H

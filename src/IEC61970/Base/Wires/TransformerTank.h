///////////////////////////////////////////////////////////
//  TransformerTank.h
//  Implementation of the Class TransformerTank
//  Created on:      28-Jan-2016 12:47:24
//  Original author: Tom
///////////////////////////////////////////////////////////

#if !defined(EA_D1B97BE2_B9B3_4eb1_ACDE_19CD3D6EBD62__INCLUDED_)
#define EA_D1B97BE2_B9B3_4eb1_ACDE_19CD3D6EBD62__INCLUDED_

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
#endif // !defined(EA_D1B97BE2_B9B3_4eb1_ACDE_19CD3D6EBD62__INCLUDED_)

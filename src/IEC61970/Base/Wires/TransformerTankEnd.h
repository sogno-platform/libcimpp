///////////////////////////////////////////////////////////
//  TransformerTankEnd.h
//  Implementation of the Class TransformerTankEnd
//  Created on:      28-Jan-2016 12:47:25
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#if !defined(EA_6FBF37B4_6F5A_4856_8EC6_6194143ED923__INCLUDED_)
#define EA_6FBF37B4_6F5A_4856_8EC6_6194143ED923__INCLUDED_

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
#endif // !defined(EA_6FBF37B4_6F5A_4856_8EC6_6194143ED923__INCLUDED_)

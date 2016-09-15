///////////////////////////////////////////////////////////
//  TransformerCoreAdmittance.h
//  Implementation of the Class TransformerCoreAdmittance
//  Created on:      28-Jan-2016 12:47:21
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#if !defined(EA_0B7FD321_8B2A_4ed7_8103_4146C1EDFF46__INCLUDED_)
#define EA_0B7FD321_8B2A_4ed7_8103_4146C1EDFF46__INCLUDED_

#include <list>

#include "IEC61970/Base/Domain/Susceptance.h"
#include "IEC61970/Base/Domain/Conductance.h"
#include "IEC61970/Base/Wires/TransformerEnd.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * The transformer core admittance.  Used to specify the core admittance of a
			 * transformer in a manner that can be shared among power transformers.
			 */
			class TransformerCoreAdmittance : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				TransformerCoreAdmittance();
				virtual ~TransformerCoreAdmittance();
				/**
				 * Magnetizing branch susceptance (B mag).  The value can be positive or negative.
				 */
				IEC61970::Base::Domain::Susceptance b;
				/**
				 * Zero sequence magnetizing branch susceptance.
				 */
				IEC61970::Base::Domain::Susceptance b0;
				/**
				 * Magnetizing branch conductance (G mag).
				 */
				IEC61970::Base::Domain::Conductance g;
				/**
				 * Zero sequence magnetizing branch conductance.
				 */
				IEC61970::Base::Domain::Conductance g0;
				/**
				 * All transformer ends having this core admittance.
				 */
				std::list<IEC61970::Base::Wires::TransformerEnd*> TransformerEnd;

			};

		}

	}

}
#endif // !defined(EA_0B7FD321_8B2A_4ed7_8103_4146C1EDFF46__INCLUDED_)

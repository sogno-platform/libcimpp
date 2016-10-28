///////////////////////////////////////////////////////////
//  TransformerCoreAdmittance.h
//  Implementation of the Class TransformerCoreAdmittance
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef TRANSFORMERCOREADMITTANCE_H
#define TRANSFORMERCOREADMITTANCE_H

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
#endif // TRANSFORMERCOREADMITTANCE_H

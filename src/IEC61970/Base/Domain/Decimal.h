///////////////////////////////////////////////////////////
//  Decimal.h
//  Implementation of the Class Decimal
//  Created on:      28-Jan-2016 12:44:02
//  Original author: kdemaree
///////////////////////////////////////////////////////////

#if !defined(EA_F04188AF_4ECF_4cc1_A5F4_410635CE5C4F__INCLUDED_)
#define EA_F04188AF_4ECF_4cc1_A5F4_410635CE5C4F__INCLUDED_

#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61970/Base/Domain/Float.h"

#include <istream>

namespace IEC61970
{
	namespace Base
	{
		namespace Domain
		{
			/**
			 * Decimal is the base-10 notational system for representing real numbers.
			 */
			class Decimal
			{

			public:
				Decimal();
				virtual ~Decimal();

				Decimal& operator=(IEC61970::Base::Domain::String &rop);
				Decimal& operator=(IEC61970::Base::Domain::Integer &rop);
				Decimal& operator=(IEC61970::Base::Domain::Float &rop);

				friend std::istream& operator>>(std::istream& lop, Decimal& rop);

				operator IEC61970::Base::Domain::String();
				operator IEC61970::Base::Domain::Integer();
				operator IEC61970::Base::Domain::Float();

				IEC61970::Base::Domain::String value;

			};

		}

	}

}
#endif // !defined(EA_F04188AF_4ECF_4cc1_A5F4_410635CE5C4F__INCLUDED_)

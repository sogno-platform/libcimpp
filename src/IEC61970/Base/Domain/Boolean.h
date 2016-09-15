///////////////////////////////////////////////////////////
//  Boolean.h
//  Implementation of the Class Boolean
//  Created on:      28-Jan-2016 12:43:28
///////////////////////////////////////////////////////////

#if !defined(EA_1B9899D6_3BF7_4d55_82C8_55637F416069__INCLUDED_)
#define EA_1B9899D6_3BF7_4d55_82C8_55637F416069__INCLUDED_

#include <string>
#include <istream>

namespace IEC61970
{
	namespace Base
	{
		namespace Domain
		{
			/**
			 * A type with the value space "true" and "false".
			 */
			class Boolean
			{

			public:
				Boolean();
				virtual ~Boolean();

				Boolean(bool value);
				Boolean& operator=(bool &rop);
				friend std::istream& operator>>(std::istream& lop, Boolean& rop);
				operator bool();

				bool value;

			};

		}

	}

}
#endif // !defined(EA_1B9899D6_3BF7_4d55_82C8_55637F416069__INCLUDED_)

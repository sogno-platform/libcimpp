#ifndef BOOLEAN_H
#define BOOLEAN_H

#include <string>
#include <iostream>
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

				bool value = false;
				bool initialized = false;

			};

		}

	}

}
#endif // BOOLEAN_H

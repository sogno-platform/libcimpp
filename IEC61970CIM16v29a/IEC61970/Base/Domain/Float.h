#ifndef FLOAT_H
#define FLOAT_H

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
			 * A floating point number. The range is unspecified and not limited.
			 */
			class Float
			{
                typedef double elem_type; // elemental type for primitive CIM type Float

			public:
				Float();
				virtual ~Float();

				Float(elem_type value);
				Float& operator=(elem_type &rop);
				friend std::istream& operator>>(std::istream& lop, Float& rop);
				operator elem_type();

				elem_type value = 0.0;
				bool initialized = false;

			};

		}

	}

}
#endif // FLOAT_H

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

			public:
				Float();
				virtual ~Float();

				Float(long double value);
				Float& operator=(long double &rop);
				Float& operator+=(const Float& rhs);
				Float& operator-=(const Float& rhs);
				Float& operator*=(const Float& rhs);
				Float& operator/=(const Float& rhs);
				friend std::istream& operator>>(std::istream& lop, Float& rop);
				operator long double();

				long double value = 0.0;
				bool initialized = false;

			};

		}

	}

}
#endif // FLOAT_H

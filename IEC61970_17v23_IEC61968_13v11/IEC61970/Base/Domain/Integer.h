#ifndef INTEGER_H
#define INTEGER_H

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
			 * An Integer number. The range is unspecified and not limited.
			 */
			class Integer
			{

			public:
				Integer();
				virtual ~Integer();

				Integer(long int value);
				Integer& operator=(long int &rop);
				Integer& operator+=(const Integer& rhs);
				Integer& operator-=(const Integer& rhs);
				Integer& operator*=(const Integer& rhs);
				Integer& operator/=(const Integer& rhs);
				friend std::istream& operator>>(std::istream& lop, Integer& rop);
				operator long int();

				long int value = 0;
				bool initialized = false;

			};

		}

	}

}
#endif // INTEGER_H

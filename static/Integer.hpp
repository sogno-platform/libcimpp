#ifndef INTEGER_H
#define INTEGER_H

#include <istream>
#include <ostream>

namespace CIMPP
{
	/**
	 * An Integer number. The range is unspecified and not limited.
	 */
	class Integer
	{
	public:
		Integer() : value(0), initialized(false) {}
		Integer(long int value) : value(value), initialized(true) {}

		Integer& operator=(long int rop);
		operator long int();

		long int value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		Integer& operator+=(const Integer& rhs);
		Integer& operator-=(const Integer& rhs);
		Integer& operator*=(const Integer& rhs);
		Integer& operator/=(const Integer& rhs);

		friend std::istream& operator>>(std::istream& lop, Integer& rop);
		friend std::ostream& operator<<(std::ostream& os, const Integer& obj);
	};
}
#endif // INTEGER_H

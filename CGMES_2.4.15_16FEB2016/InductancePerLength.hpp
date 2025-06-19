#ifndef InductancePerLength_H
#define InductancePerLength_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/** \brief Inductance per unit of length. */
	class InductancePerLength
	{
	public:
		InductancePerLength() : value(0.0), initialized(false) {}
		InductancePerLength(long double value) : value(value), initialized(true) {}

		InductancePerLength& operator=(long double rop);
		operator long double() const;

		long double value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		InductancePerLength& operator+=(const InductancePerLength& rhs);
		InductancePerLength& operator-=(const InductancePerLength& rhs);
		InductancePerLength& operator*=(const InductancePerLength& rhs);
		InductancePerLength& operator/=(const InductancePerLength& rhs);

		friend std::istream& operator>>(std::istream& lop, InductancePerLength& rop);
		friend std::ostream& operator<<(std::ostream& os, const InductancePerLength& obj);
	};
}
#endif

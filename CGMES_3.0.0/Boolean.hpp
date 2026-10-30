#ifndef BOOLEAN_H
#define BOOLEAN_H

#include <istream>
#include <ostream>

namespace CIMPP
{
	/**
	 * A type with the value space "true" and "false".
	 */
	class Boolean
	{
	public:
		Boolean() : value(false), initialized(false) {}
		Boolean(bool value) : value(value), initialized(true) {}

		Boolean& operator=(bool rop);
		operator bool();

		bool value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		friend std::istream& operator>>(std::istream& lop, Boolean& rop);
		friend std::ostream& operator<<(std::ostream& os, const Boolean& obj);
	};
}
#endif // BOOLEAN_H

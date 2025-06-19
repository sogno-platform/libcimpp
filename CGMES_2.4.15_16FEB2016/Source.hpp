#ifndef Source_H
#define Source_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/** \brief Source gives information related to the origin of a value. */
	class Source
	{
	public:
		enum Source_ENUM
		{
			/** The value is provided by input from the process I/O or being calculated from some function. */
			PROCESS,
			/** The value contains a default value. */
			DEFAULTED,
			/** The value is provided by input of an operator or by an automatic source. */
			SUBSTITUTED,
		};

		Source() : value(), initialized(false) {}
		Source(Source_ENUM value) : value(value), initialized(true) {}

		Source& operator=(Source_ENUM rop);
		operator Source_ENUM() const;

		Source_ENUM value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		friend std::istream& operator>>(std::istream& lop, Source& rop);
		friend std::ostream& operator<<(std::ostream& os, const Source& obj);
	};
}
#endif

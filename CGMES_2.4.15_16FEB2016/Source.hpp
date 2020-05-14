#ifndef Source_H
#define Source_H

namespace CIMPP {
	/*
	Source gives information related to the origin of a value.
	*/
	enum class Source
	{
		/**
		 * The value is provided by input from the process I/O or being calculated from some function.
		 */
		PROCESS,
		/**
		 * The value contains a default value.
		 */
		DEFAULTED,
		/**
		 * The value is provided by input of an operator or by an automatic source.
		 */
		SUBSTITUTED,
	};
	std::istream& operator>>(std::istream& lop, CIMPP::Source& rop);
}
#endif

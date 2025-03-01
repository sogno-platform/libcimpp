#ifndef TransformerControlMode_H
#define TransformerControlMode_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/** \brief Control modes for a transformer. */
	class TransformerControlMode
	{
	public:
		enum TransformerControlMode_ENUM
		{
			/** Voltage control */
			volt,
			/** Reactive power flow control */
			reactive,
		};

		TransformerControlMode() : value(), initialized(false) {}
		TransformerControlMode(TransformerControlMode_ENUM value) : value(value), initialized(true) {}

		TransformerControlMode& operator=(TransformerControlMode_ENUM rop);
		operator TransformerControlMode_ENUM() const;

		TransformerControlMode_ENUM value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		friend std::istream& operator>>(std::istream& lop, TransformerControlMode& rop);
		friend std::ostream& operator<<(std::ostream& os, const TransformerControlMode& obj);
	};
}
#endif

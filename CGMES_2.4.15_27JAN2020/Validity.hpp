#ifndef Validity_H
#define Validity_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/** \brief Validity for MeasurementValue. */
	class Validity
	{
	public:
		enum Validity_ENUM
		{
			/** The value is marked good if no abnormal condition of the acquisition function or the information source is detected. */
			GOOD,
			/** The value is marked questionable if a supervision function detects an abnormal behaviour, however the value could still be valid. The client is responsible for determining whether or not values marked &quot;questionable&quot; should be used. */
			QUESTIONABLE,
			/** The value is marked invalid when a supervision function recognises abnormal conditions of the acquisition function or the information source (missing or non-operating updating devices). The value is not defined under this condition. The mark invalid is used to indicate to the client that the value may be incorrect and shall not be used. */
			INVALID,
		};

		Validity() : value(), initialized(false) {}
		Validity(Validity_ENUM value) : value(value), initialized(true) {}

		Validity& operator=(Validity_ENUM rop);
		operator Validity_ENUM() const;

		Validity_ENUM value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		friend std::istream& operator>>(std::istream& lop, Validity& rop);
		friend std::ostream& operator<<(std::ostream& os, const Validity& obj);
	};
}
#endif

#ifndef WindingConnection_H
#define WindingConnection_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/** \brief Winding connection type. */
	class WindingConnection
	{
	public:
		enum WindingConnection_ENUM
		{
			/** Delta. */
			D,
			/** Wye. */
			Y,
			/** ZigZag. */
			Z,
			/** Wye, with neutral brought out for grounding. */
			Yn,
			/** ZigZag, with neutral brought out for grounding. */
			Zn,
			/** Autotransformer common winding. */
			A,
			/** Independent winding, for single-phase connections. */
			I,
		};

		WindingConnection() : value(), initialized(false) {}
		WindingConnection(WindingConnection_ENUM value) : value(value), initialized(true) {}

		WindingConnection& operator=(WindingConnection_ENUM rop);
		operator WindingConnection_ENUM() const;

		WindingConnection_ENUM value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		friend std::istream& operator>>(std::istream& lop, WindingConnection& rop);
		friend std::ostream& operator<<(std::ostream& os, const WindingConnection& obj);
	};
}
#endif

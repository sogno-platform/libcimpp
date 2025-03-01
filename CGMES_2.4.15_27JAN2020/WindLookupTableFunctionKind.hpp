#ifndef WindLookupTableFunctionKind_H
#define WindLookupTableFunctionKind_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/** \brief Function of the lookup table. */
	class WindLookupTableFunctionKind
	{
	public:
		enum WindLookupTableFunctionKind_ENUM
		{
			/** Power versus slip lookup table (f()). It is used for rotor resistance control model, IEC 61400-27-1, section 6.6.5.2. */
			fpslip,
			/** Power vs. speed lookup table (f()). It is used for P control model type 3, IEC 61400-27-1, section 6.6.5.3. */
			fpomega,
			/** Lookup table for voltage dependency of active current limits (i()). It is used for current limitation model, IEC 61400-27-1, section 6.6.5.7. */
			ipvdl,
			/** Lookup table for voltage dependency of reactive current limits (i()). It is used for current limitation model, IEC 61400-27-1, section 6.6.5.7. */
			iqvdl,
			/** Power vs. frequency lookup table (()). It is used for wind power plant frequency and active power control model, IEC 61400-27-1, Annex E. */
			fdpf,
		};

		WindLookupTableFunctionKind() : value(), initialized(false) {}
		WindLookupTableFunctionKind(WindLookupTableFunctionKind_ENUM value) : value(value), initialized(true) {}

		WindLookupTableFunctionKind& operator=(WindLookupTableFunctionKind_ENUM rop);
		operator WindLookupTableFunctionKind_ENUM() const;

		WindLookupTableFunctionKind_ENUM value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		friend std::istream& operator>>(std::istream& lop, WindLookupTableFunctionKind& rop);
		friend std::ostream& operator<<(std::ostream& os, const WindLookupTableFunctionKind& obj);
	};
}
#endif

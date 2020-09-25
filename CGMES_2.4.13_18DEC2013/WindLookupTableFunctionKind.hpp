#ifndef WindLookupTableFunctionKind_H
#define WindLookupTableFunctionKind_H

namespace CIMPP {
	/*
	Function of the lookup table.
	*/
	enum class WindLookupTableFunctionKind
	{
		/**
		 * Power versus slip lookup table (f()). It is used for rotor resistance control model, IEC 61400-27-1, section 6.6.5.2.
		 */
		fpslip,
		/**
		 * Power vs. speed lookup table (f()). It is used for P control model type 3, IEC 61400-27-1, section 6.6.5.3.
		 */
		fpomega,
		/**
		 * Lookup table for voltage dependency of active current limits (i()). It is used for current limitation model, IEC 61400-27-1, section 6.6.5.7.
		 */
		ipvdl,
		/**
		 * Lookup table for voltage dependency of reactive current limits (i()). It is used for current limitation model, IEC 61400-27-1, section 6.6.5.7.
		 */
		iqvdl,
		/**
		 * Power vs. frequency lookup table (()). It is used for wind power plant frequency and active power control model, IEC 61400-27-1, Annex E.
		 */
		fdpf,
	};
	std::istream& operator>>(std::istream& lop, CIMPP::WindLookupTableFunctionKind& rop);
}
#endif

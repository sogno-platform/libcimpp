#ifndef FrancisGovernorControlKind_H
#define FrancisGovernorControlKind_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/** \brief Governor control flag for Francis hydro model. */
	class FrancisGovernorControlKind
	{
	public:
		enum FrancisGovernorControlKind_ENUM
		{
			/** Mechanic-hydraulic regulator with tacho-accelerometer (Cflag = 1). */
			mechanicHydrolicTachoAccelerator,
			/** Mechanic-hydraulic regulator with transient feedback (Cflag=2). */
			mechanicHydraulicTransientFeedback,
			/** Electromechanical and electrohydraulic regulator (Cflag=3). */
			electromechanicalElectrohydraulic,
		};

		FrancisGovernorControlKind() : value(), initialized(false) {}
		FrancisGovernorControlKind(FrancisGovernorControlKind_ENUM value) : value(value), initialized(true) {}

		FrancisGovernorControlKind& operator=(FrancisGovernorControlKind_ENUM rop);
		operator FrancisGovernorControlKind_ENUM() const;

		FrancisGovernorControlKind_ENUM value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		friend std::istream& operator>>(std::istream& lop, FrancisGovernorControlKind& rop);
		friend std::ostream& operator<<(std::ostream& os, const FrancisGovernorControlKind& obj);
	};
}
#endif

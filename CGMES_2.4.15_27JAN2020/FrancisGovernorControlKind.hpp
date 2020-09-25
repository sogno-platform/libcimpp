#ifndef FrancisGovernorControlKind_H
#define FrancisGovernorControlKind_H

namespace CIMPP {
	/*
	Governor control flag for Francis hydro model.
	*/
	enum class FrancisGovernorControlKind
	{
		/**
		 * Mechanic-hydraulic regulator with tacho-accelerometer (Cflag = 1).
		 */
		mechanicHydrolicTachoAccelerator,
		/**
		 * Mechanic-hydraulic regulator with transient feedback (Cflag=2).
		 */
		mechanicHydraulicTransientFeedback,
		/**
		 * Electromechanical and electrohydraulic regulator (Cflag=3).
		 */
		electromechanicalElectrohydraulic,
	};
	std::istream& operator>>(std::istream& lop, CIMPP::FrancisGovernorControlKind& rop);
}
#endif

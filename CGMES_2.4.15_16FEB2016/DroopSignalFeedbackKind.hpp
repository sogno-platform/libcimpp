#ifndef DroopSignalFeedbackKind_H
#define DroopSignalFeedbackKind_H

namespace CIMPP {
	/*
	Governor droop signal feedback source.
	*/
	enum class DroopSignalFeedbackKind
	{
		/**
		 * Electrical power feedback (connection indicated as 1 in the block diagrams of models, e.g. GovCT1, GovCT2).
		 */
		electricalPower,
		/**
		 * No droop signal feedback, is isochronous governor.
		 */
		none,
		/**
		 * Fuel valve stroke feedback (true stroke) (connection indicated as 2 in the block diagrams of model, e.g. GovCT1, GovCT2).
		 */
		fuelValveStroke,
		/**
		 * Governor output feedback (requested stroke) (connection indicated as 3 in the block diagrams of models, e.g. GovCT1, GovCT2).
		 */
		governorOutput,
	};
	std::istream& operator>>(std::istream& lop, CIMPP::DroopSignalFeedbackKind& rop);
}
#endif

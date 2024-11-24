#ifndef DroopSignalFeedbackKind_H
#define DroopSignalFeedbackKind_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/*
	Governor droop signal feedback source.
	*/
	class DroopSignalFeedbackKind
	{
	public:
		enum DroopSignalFeedbackKind_ENUM
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

		DroopSignalFeedbackKind() : value(), initialized(false) {}
		DroopSignalFeedbackKind(DroopSignalFeedbackKind_ENUM value) : value(value), initialized(true) {}

		DroopSignalFeedbackKind& operator=(DroopSignalFeedbackKind_ENUM rop);
		operator DroopSignalFeedbackKind_ENUM() const;

		DroopSignalFeedbackKind_ENUM value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		friend std::istream& operator>>(std::istream& lop, DroopSignalFeedbackKind& rop);
		friend std::ostream& operator<<(std::ostream& os, const DroopSignalFeedbackKind& obj);
	};
}
#endif

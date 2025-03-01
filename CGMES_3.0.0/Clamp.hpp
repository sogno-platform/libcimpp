#ifndef Clamp_H
#define Clamp_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "ConductingEquipment.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "Length.hpp"

namespace CIMPP
{
	class ACLineSegment;

	/** \brief A Clamp is a galvanic connection at a line segment where other equipment is connected. A Clamp does not cut the line segment.  A Clamp is ConductingEquipment and has one Terminal with an associated ConnectivityNode. Any other ConductingEquipment can be connected to the Clamp ConnectivityNode. */
	class Clamp : public ConductingEquipment
	{
	public:
		/* constructor initialising all attributes to null */
		Clamp();
		~Clamp() override;

		/** \brief The line segment to which the clamp is connected. Default: 0 */
		CIMPP::ACLineSegment* ACLineSegment;

		/** \brief The length to the place where the clamp is located starting from side one of the line segment, i.e. the line segment terminal with sequence number equal to 1. Default: nullptr */
		CIMPP::Length lengthFromTerminal1;

		static const char debugName[];
		const char* debugString() const override;

		std::list<CGMESProfile> getPossibleProfilesForClass() const override;
		std::map<std::string, std::list<CGMESProfile>> getPossibleProfilesForAttributes() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		void addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		void addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const override;
		void addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		static const BaseClassDefiner declare();
	};

	BaseClass* Clamp_factory();
}
#endif

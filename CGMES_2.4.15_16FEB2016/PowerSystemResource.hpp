#ifndef PowerSystemResource_H
#define PowerSystemResource_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "IdentifiedObject.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"

namespace CIMPP
{
	class Control;
	class Location;
	class Measurement;

	/** \brief A power system resource can be an item of equipment such as a switch, an equipment container containing many individual items of equipment such as a substation, or an organisational entity such as sub-control area. Power system resources can have measurements associated. */
	class PowerSystemResource : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		PowerSystemResource();
		~PowerSystemResource() override;

		/** \brief Regulating device governed by this control output. Default: 0 */
		std::list<CIMPP::Control*> Controls;

		/** \brief Location of this power system resource. Default: 0 */
		CIMPP::Location* Location;

		/** \brief The power system resource that contains the measurement. Default: 0 */
		std::list<CIMPP::Measurement*> Measurements;

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

	BaseClass* PowerSystemResource_factory();
}
#endif

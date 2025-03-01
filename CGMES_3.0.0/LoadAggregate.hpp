#ifndef LoadAggregate_H
#define LoadAggregate_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "LoadDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"

namespace CIMPP
{
	class LoadMotor;
	class LoadStatic;

	/** \brief Aggregate loads are used to represent all or part of the real and reactive load from one or more loads in the static (power flow) data. This load is usually the aggregation of many individual load devices and the load model is an approximate representation of the aggregate response of the load devices to system disturbances. Standard aggregate load model comprised of static and/or dynamic components.  A static load model represents the sensitivity of the real and reactive power consumed by the load to the amplitude and frequency of the bus voltage. A dynamic load model can be used to represent the aggregate response of the motor components of the load. */
	class LoadAggregate : public LoadDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		LoadAggregate();
		~LoadAggregate() override;

		/** \brief Aggregate motor (dynamic) load associated with this aggregate load. Default: 0 */
		CIMPP::LoadMotor* LoadMotor;

		/** \brief Aggregate static load associated with this aggregate load. Default: 0 */
		CIMPP::LoadStatic* LoadStatic;

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

	BaseClass* LoadAggregate_factory();
}
#endif

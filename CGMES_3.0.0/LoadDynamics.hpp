#ifndef LoadDynamics_H
#define LoadDynamics_H
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
	class EnergyConsumer;

	/** \brief Load whose behaviour is described by reference to a standard model <font color="#0f0f0f">or by definition of a user-defined model.</font> A standard feature of dynamic load behaviour modelling is the ability to associate the same behaviour to multiple energy consumers by means of a single load definition.  The load model is always applied to individual bus loads (energy consumers). */
	class LoadDynamics : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		LoadDynamics();
		~LoadDynamics() override;

		/** \brief Energy consumer to which this dynamics load model applies. Default: 0 */
		std::list<CIMPP::EnergyConsumer*> EnergyConsumer;

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

	BaseClass* LoadDynamics_factory();
}
#endif

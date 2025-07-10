#ifndef NonlinearShuntCompensatorPoint_H
#define NonlinearShuntCompensatorPoint_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "BaseClass.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"
#include "Conductance.hpp"
#include "Integer.hpp"
#include "Susceptance.hpp"

namespace CIMPP
{
	class NonlinearShuntCompensator;

	/** \brief A non linear shunt compensator bank or section admittance value. */
	class NonlinearShuntCompensatorPoint : public BaseClass
	{
	public:
		/* constructor initialising all attributes to null */
		NonlinearShuntCompensatorPoint();
		~NonlinearShuntCompensatorPoint() override;

		/** \brief Non-linear shunt compensator owning this point. Default: 0 */
		CIMPP::NonlinearShuntCompensator* NonlinearShuntCompensator;

		/** \brief Positive sequence shunt (charging) susceptance per section Default: nullptr */
		CIMPP::Susceptance b;

		/** \brief Zero sequence shunt (charging) susceptance per section Default: nullptr */
		CIMPP::Susceptance b0;

		/** \brief Positive sequence shunt (charging) conductance per section Default: nullptr */
		CIMPP::Conductance g;

		/** \brief Zero sequence shunt (charging) conductance per section Default: nullptr */
		CIMPP::Conductance g0;

		/** \brief The number of the section. Default: 0 */
		CIMPP::Integer sectionNumber;

		static const char debugName[];
		const char* debugString() const override;

		const std::list<std::string>& getAttributeNames() const override;

		const std::string& getClassNamespaceUrl() const override;
		const std::string& getAttributeNamespaceUrl(const std::string& attrName) const override;

		const std::list<CGMESProfile>& getPossibleProfiles() const override;
		const CGMESProfile& getRecommendedProfile() const override;
		const std::list<CGMESProfile>& getPossibleAttributeProfiles(const std::string& attrName) const override;
		const std::list<CGMESProfile>& getPossibleProfilesIncludingAttributes() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		void addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		void addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const override;
		void addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const override;

		bool isAssignableFrom(BaseClass* otherObject) const override;
		static const BaseClassDefiner declare();

	protected:
		std::map<std::string, AttrDetails> allAttrDetailsMap() const override;
	};

	BaseClass* NonlinearShuntCompensatorPoint_factory();
}
#endif

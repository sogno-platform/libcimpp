#ifndef MechLoad1_H
#define MechLoad1_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "MechanicalLoadDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"
#include "Float.hpp"

namespace CIMPP
{

	/** \brief Mechanical load model type 1. */
	class MechLoad1 : public MechanicalLoadDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		MechLoad1();
		~MechLoad1() override;

		/** \brief Speed squared coefficient (&lt;i&gt;a&lt;/i&gt;). Default: 0.0 */
		CIMPP::Float a;

		/** \brief Speed coefficient (&lt;i&gt;b&lt;/i&gt;). Default: 0.0 */
		CIMPP::Float b;

		/** \brief Speed to the exponent coefficient (&lt;i&gt;d&lt;/i&gt;). Default: 0.0 */
		CIMPP::Float d;

		/** \brief Exponent (&lt;i&gt;e&lt;/i&gt;). Default: 0.0 */
		CIMPP::Float e;

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

	BaseClass* MechLoad1_factory();
}
#endif

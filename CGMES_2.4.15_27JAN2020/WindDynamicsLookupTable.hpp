#ifndef WindDynamicsLookupTable_H
#define WindDynamicsLookupTable_H
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
#include "CimClassDetails.hpp"
#include "Integer.hpp"
#include "Simple_Float.hpp"
#include "WindLookupTableFunctionKind.hpp"

namespace CIMPP
{
	class WindContCurrLimIEC;
	class WindContPType3IEC;
	class WindContRotorRIEC;
	class WindPlantFreqPcontrolIEC;

	/** \brief The class models a look up table for the purpose of wind standard models. */
	class WindDynamicsLookupTable : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		WindDynamicsLookupTable();
		~WindDynamicsLookupTable() override;

		/** \brief The wind dynamics lookup table associated with this current control limitation model. Default: 0 */
		CIMPP::WindContCurrLimIEC* WindContCurrLimIEC;

		/** \brief The wind dynamics lookup table associated with this P control type 3 model. Default: 0 */
		CIMPP::WindContPType3IEC* WindContPType3IEC;

		/** \brief The rotor resistance control model with which this wind dynamics lookup table is associated. Default: 0 */
		CIMPP::WindContRotorRIEC* WindContRotorRIEC;

		/** \brief The wind dynamics lookup table associated with this frequency and active power wind plant model. Default: 0 */
		CIMPP::WindPlantFreqPcontrolIEC* WindPlantFreqPcontrolIEC;

		/** \brief Input value (x) for the lookup table function. Default: nullptr */
		CIMPP::Simple_Float input;

		/** \brief Type of the lookup table function. Default: 0 */
		CIMPP::WindLookupTableFunctionKind lookupTableFunctionType;

		/** \brief Output value (y) for the lookup table function. Default: nullptr */
		CIMPP::Simple_Float output;

		/** \brief Sequence numbers of the pairs of the input (x) and the output (y) of the lookup table function. Default: 0 */
		CIMPP::Integer sequence;

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

	BaseClass* WindDynamicsLookupTable_factory();
}
#endif

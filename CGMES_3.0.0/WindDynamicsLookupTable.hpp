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
#include "Float.hpp"
#include "Integer.hpp"
#include "WindLookupTableFunctionKind.hpp"

namespace CIMPP
{
	class WindContCurrLimIEC;
	class WindContPType3IEC;
	class WindContQPQULimIEC;
	class WindContRotorRIEC;
	class WindGenType3bIEC;
	class WindPitchContPowerIEC;
	class WindPlantFreqPcontrolIEC;
	class WindPlantReactiveControlIEC;
	class WindProtectionIEC;

	/** \brief Look up table for the purpose of wind standard models. */
	class WindDynamicsLookupTable : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		WindDynamicsLookupTable();
		~WindDynamicsLookupTable() override;

		/** \brief The current control limitation model with which this wind dynamics lookup table is associated. Default: 0 */
		CIMPP::WindContCurrLimIEC* WindContCurrLimIEC;

		/** \brief The P control type 3 model with which this wind dynamics lookup table is associated. Default: 0 */
		CIMPP::WindContPType3IEC* WindContPType3IEC;

		/** \brief The QP and QU limitation model with which this wind dynamics lookup table is associated. Default: 0 */
		CIMPP::WindContQPQULimIEC* WindContQPQULimIEC;

		/** \brief The rotor resistance control model with which this wind dynamics lookup table is associated. Default: 0 */
		CIMPP::WindContRotorRIEC* WindContRotorRIEC;

		/** \brief The generator type 3B model with which this wind dynamics lookup table is associated. Default: 0 */
		CIMPP::WindGenType3bIEC* WindGenType3bIEC;

		/** \brief The pitch control power model with which this wind dynamics lookup table is associated. Default: 0 */
		CIMPP::WindPitchContPowerIEC* WindPitchContPowerIEC;

		/** \brief The frequency and active power wind plant control model with which this wind dynamics lookup table is associated. Default: 0 */
		CIMPP::WindPlantFreqPcontrolIEC* WindPlantFreqPcontrolIEC;

		/** \brief The voltage and reactive power wind plant control model with which this wind dynamics lookup table is associated. Default: 0 */
		CIMPP::WindPlantReactiveControlIEC* WindPlantReactiveControlIEC;

		/** \brief The grid protection model with which this wind dynamics lookup table is associated. Default: 0 */
		CIMPP::WindProtectionIEC* WindProtectionIEC;

		/** \brief Input value (&lt;i&gt;x&lt;/i&gt;) for the lookup table function. Default: 0.0 */
		CIMPP::Float input;

		/** \brief Type of the lookup table function. Default: 0 */
		CIMPP::WindLookupTableFunctionKind lookupTableFunctionType;

		/** \brief Output value (&lt;i&gt;y&lt;/i&gt;) for the lookup table function. Default: 0.0 */
		CIMPP::Float output;

		/** \brief Sequence numbers of the pairs of the input (&lt;i&gt;x&lt;/i&gt;) and the output (&lt;i&gt;y&lt;/i&gt;) of the lookup table function. Default: 0 */
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

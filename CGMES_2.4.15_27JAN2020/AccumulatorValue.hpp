#ifndef AccumulatorValue_H
#define AccumulatorValue_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "MeasurementValue.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"
#include "Integer.hpp"

namespace CIMPP
{
	class Accumulator;
	class AccumulatorReset;

	/** \brief AccumulatorValue represents an accumulated (counted) MeasurementValue. */
	class AccumulatorValue : public MeasurementValue
	{
	public:
		/* constructor initialising all attributes to null */
		AccumulatorValue();
		~AccumulatorValue() override;

		/** \brief The values connected to this measurement. Default: 0 */
		CIMPP::Accumulator* Accumulator;

		/** \brief The command that reset the accumulator value. Default: 0 */
		CIMPP::AccumulatorReset* AccumulatorReset;

		/** \brief The value to supervise. The value is positive. Default: 0 */
		CIMPP::Integer value;

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

	BaseClass* AccumulatorValue_factory();
}
#endif

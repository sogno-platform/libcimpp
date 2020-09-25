#include <sstream>
#include "RegulatingCondEq.hpp"
#include "ExternalNetworkInjection.hpp"

#include "Integer.hpp"
#include "ActivePower.hpp"
#include "ReactivePower.hpp"
#include "ActivePowerPerFrequency.hpp"
#include "Boolean.hpp"
#include "CurrentFlow.hpp"
#include "ActivePower.hpp"
#include "ReactivePower.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "CurrentFlow.hpp"
#include "ActivePower.hpp"
#include "ReactivePower.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "PU.hpp"

using namespace CIMPP;

ExternalNetworkInjection::ExternalNetworkInjection() {};

ExternalNetworkInjection::~ExternalNetworkInjection() {};





bool assign_ExternalNetworkInjection_governorSCD(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(ExternalNetworkInjection* element = dynamic_cast<ExternalNetworkInjection*>(BaseClass_ptr1)) {
                element->governorSCD = dynamic_cast<ActivePowerPerFrequency*>(BaseClass_ptr2);
                if(element->governorSCD != nullptr)
                        return true;
        }
        return false;
}
















bool assign_ExternalNetworkInjection_referencePriority(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExternalNetworkInjection* element = dynamic_cast<ExternalNetworkInjection*>(BaseClass_ptr1)) {
                buffer >> element->referencePriority;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExternalNetworkInjection_p(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExternalNetworkInjection* element = dynamic_cast<ExternalNetworkInjection*>(BaseClass_ptr1)) {
                buffer >> element->p;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExternalNetworkInjection_q(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExternalNetworkInjection* element = dynamic_cast<ExternalNetworkInjection*>(BaseClass_ptr1)) {
                buffer >> element->q;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}


bool assign_ExternalNetworkInjection_ikSecond(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExternalNetworkInjection* element = dynamic_cast<ExternalNetworkInjection*>(BaseClass_ptr1)) {
                buffer >> element->ikSecond;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExternalNetworkInjection_maxInitialSymShCCurrent(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExternalNetworkInjection* element = dynamic_cast<ExternalNetworkInjection*>(BaseClass_ptr1)) {
                buffer >> element->maxInitialSymShCCurrent;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExternalNetworkInjection_maxP(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExternalNetworkInjection* element = dynamic_cast<ExternalNetworkInjection*>(BaseClass_ptr1)) {
                buffer >> element->maxP;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExternalNetworkInjection_maxQ(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExternalNetworkInjection* element = dynamic_cast<ExternalNetworkInjection*>(BaseClass_ptr1)) {
                buffer >> element->maxQ;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExternalNetworkInjection_maxR0ToX0Ratio(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExternalNetworkInjection* element = dynamic_cast<ExternalNetworkInjection*>(BaseClass_ptr1)) {
                buffer >> element->maxR0ToX0Ratio;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExternalNetworkInjection_maxR1ToX1Ratio(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExternalNetworkInjection* element = dynamic_cast<ExternalNetworkInjection*>(BaseClass_ptr1)) {
                buffer >> element->maxR1ToX1Ratio;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExternalNetworkInjection_maxZ0ToZ1Ratio(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExternalNetworkInjection* element = dynamic_cast<ExternalNetworkInjection*>(BaseClass_ptr1)) {
                buffer >> element->maxZ0ToZ1Ratio;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExternalNetworkInjection_minInitialSymShCCurrent(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExternalNetworkInjection* element = dynamic_cast<ExternalNetworkInjection*>(BaseClass_ptr1)) {
                buffer >> element->minInitialSymShCCurrent;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExternalNetworkInjection_minP(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExternalNetworkInjection* element = dynamic_cast<ExternalNetworkInjection*>(BaseClass_ptr1)) {
                buffer >> element->minP;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExternalNetworkInjection_minQ(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExternalNetworkInjection* element = dynamic_cast<ExternalNetworkInjection*>(BaseClass_ptr1)) {
                buffer >> element->minQ;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExternalNetworkInjection_minR0ToX0Ratio(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExternalNetworkInjection* element = dynamic_cast<ExternalNetworkInjection*>(BaseClass_ptr1)) {
                buffer >> element->minR0ToX0Ratio;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExternalNetworkInjection_minR1ToX1Ratio(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExternalNetworkInjection* element = dynamic_cast<ExternalNetworkInjection*>(BaseClass_ptr1)) {
                buffer >> element->minR1ToX1Ratio;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExternalNetworkInjection_minZ0ToZ1Ratio(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExternalNetworkInjection* element = dynamic_cast<ExternalNetworkInjection*>(BaseClass_ptr1)) {
                buffer >> element->minZ0ToZ1Ratio;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExternalNetworkInjection_voltageFactor(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExternalNetworkInjection* element = dynamic_cast<ExternalNetworkInjection*>(BaseClass_ptr1)) {
                buffer >> element->voltageFactor;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

namespace CIMPP {
	BaseClass* ExternalNetworkInjection_factory() {
		return new ExternalNetworkInjection;
	}
}

void ExternalNetworkInjection::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:ExternalNetworkInjection"), &ExternalNetworkInjection_factory));
}

void ExternalNetworkInjection::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:ExternalNetworkInjection.referencePriority"), &assign_ExternalNetworkInjection_referencePriority));
	assign_map.insert(std::make_pair(std::string("cim:ExternalNetworkInjection.p"), &assign_ExternalNetworkInjection_p));
	assign_map.insert(std::make_pair(std::string("cim:ExternalNetworkInjection.q"), &assign_ExternalNetworkInjection_q));
		assign_map.insert(std::make_pair(std::string("cim:ExternalNetworkInjection.ikSecond"), &assign_ExternalNetworkInjection_ikSecond));
	assign_map.insert(std::make_pair(std::string("cim:ExternalNetworkInjection.maxInitialSymShCCurrent"), &assign_ExternalNetworkInjection_maxInitialSymShCCurrent));
	assign_map.insert(std::make_pair(std::string("cim:ExternalNetworkInjection.maxP"), &assign_ExternalNetworkInjection_maxP));
	assign_map.insert(std::make_pair(std::string("cim:ExternalNetworkInjection.maxQ"), &assign_ExternalNetworkInjection_maxQ));
	assign_map.insert(std::make_pair(std::string("cim:ExternalNetworkInjection.maxR0ToX0Ratio"), &assign_ExternalNetworkInjection_maxR0ToX0Ratio));
	assign_map.insert(std::make_pair(std::string("cim:ExternalNetworkInjection.maxR1ToX1Ratio"), &assign_ExternalNetworkInjection_maxR1ToX1Ratio));
	assign_map.insert(std::make_pair(std::string("cim:ExternalNetworkInjection.maxZ0ToZ1Ratio"), &assign_ExternalNetworkInjection_maxZ0ToZ1Ratio));
	assign_map.insert(std::make_pair(std::string("cim:ExternalNetworkInjection.minInitialSymShCCurrent"), &assign_ExternalNetworkInjection_minInitialSymShCCurrent));
	assign_map.insert(std::make_pair(std::string("cim:ExternalNetworkInjection.minP"), &assign_ExternalNetworkInjection_minP));
	assign_map.insert(std::make_pair(std::string("cim:ExternalNetworkInjection.minQ"), &assign_ExternalNetworkInjection_minQ));
	assign_map.insert(std::make_pair(std::string("cim:ExternalNetworkInjection.minR0ToX0Ratio"), &assign_ExternalNetworkInjection_minR0ToX0Ratio));
	assign_map.insert(std::make_pair(std::string("cim:ExternalNetworkInjection.minR1ToX1Ratio"), &assign_ExternalNetworkInjection_minR1ToX1Ratio));
	assign_map.insert(std::make_pair(std::string("cim:ExternalNetworkInjection.minZ0ToZ1Ratio"), &assign_ExternalNetworkInjection_minZ0ToZ1Ratio));
	assign_map.insert(std::make_pair(std::string("cim:ExternalNetworkInjection.voltageFactor"), &assign_ExternalNetworkInjection_voltageFactor));
}

void ExternalNetworkInjection::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
				assign_map.insert(std::make_pair(std::string("cim:ExternalNetworkInjection.governorSCD"), &assign_ExternalNetworkInjection_governorSCD));
														}

const char ExternalNetworkInjection::debugName[] = "ExternalNetworkInjection";
const char* ExternalNetworkInjection::debugString()
{
	return ExternalNetworkInjection::debugName;
}

const BaseClassDefiner ExternalNetworkInjection::declare()
{
	return BaseClassDefiner(ExternalNetworkInjection::addConstructToMap, ExternalNetworkInjection::addPrimitiveAssignFnsToMap, ExternalNetworkInjection::addClassAssignFnsToMap, ExternalNetworkInjection::debugName);
}



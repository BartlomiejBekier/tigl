/*
* Copyright (c) 2018 Airbus Defence and Space and RISC Software GmbH
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

#pragma once

#include <TopoDS_Shape.hxx>

#include "generated/CPACSProfileBasedStructuralElement.h"

class TopoDS_Wire;
class gp_Pln;

namespace tigl
{
class CCPACSProfileBasedStructuralElement : public generated::CPACSProfileBasedStructuralElement
{
public:
    TIGL_EXPORT CCPACSProfileBasedStructuralElement(CTiglUIDManager* uidMgr);

    TIGL_EXPORT TopoDS_Shape makeFromWire(const TopoDS_Wire& spine, const gp_Pln& profilePlane) const;
};

} // namespace tigl

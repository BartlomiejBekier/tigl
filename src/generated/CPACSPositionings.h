// Copyright (c) 2018 RISC Software GmbH
//
// This file was generated by CPACSGen from CPACS XML Schema (c) German Aerospace Center (DLR/SC).
// Do not edit, all changes are lost when files are re-generated.
//
// Licensed under the Apache License, Version 2.0 (the "License")
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

#include <string>
#include <tixi.h>
#include <typeinfo>
#include <vector>
#include "CTiglError.h"
#include "tigl_internal.h"
#include "UniquePtr.h"

namespace tigl
{
class CTiglUIDManager;
class CCPACSPositioning;

namespace generated
{
    // This class is used in:
    // CPACSEnginePylon
    // CPACSFuselage
    // CPACSWing

    // generated from /xsd:schema/xsd:complexType[737]
    class CPACSPositionings
    {
    public:
        TIGL_EXPORT CPACSPositionings(CTiglUIDManager* uidMgr);
        TIGL_EXPORT virtual ~CPACSPositionings();

        TIGL_EXPORT CTiglUIDManager& GetUIDManager();
        TIGL_EXPORT const CTiglUIDManager& GetUIDManager() const;

        TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
        TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;

        TIGL_EXPORT virtual const std::vector<unique_ptr<CCPACSPositioning> >& GetPositionings() const;
        TIGL_EXPORT virtual std::vector<unique_ptr<CCPACSPositioning> >& GetPositionings();

        TIGL_EXPORT virtual CCPACSPositioning& AddPositioning();
        TIGL_EXPORT virtual void RemovePositioning(CCPACSPositioning& ref);

    protected:
        CTiglUIDManager* m_uidMgr;

        std::vector<unique_ptr<CCPACSPositioning> > m_positionings;

    private:
#ifdef HAVE_CPP11
        CPACSPositionings(const CPACSPositionings&) = delete;
        CPACSPositionings& operator=(const CPACSPositionings&) = delete;

        CPACSPositionings(CPACSPositionings&&) = delete;
        CPACSPositionings& operator=(CPACSPositionings&&) = delete;
#else
        CPACSPositionings(const CPACSPositionings&);
        CPACSPositionings& operator=(const CPACSPositionings&);
#endif
    };
} // namespace generated

// CPACSPositionings is customized, use type CCPACSPositionings directly
} // namespace tigl

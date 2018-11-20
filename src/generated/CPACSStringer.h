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
#include <vector>
#include "tigl_internal.h"
#include "UniquePtr.h"

namespace tigl
{
class CTiglUIDManager;
class CCPACSFuselageStringerFramePosition;
class CCPACSStringersAssembly;

namespace generated
{
    // This class is used in:
    // CPACSStringersAssembly

    // generated from /xsd:schema/xsd:complexType[839]
    /// @brief arbitraryStringerType
    /// 
    /// ArbitraryStringer type, containing stringer definition
    /// (CPACS V1.5+)
    /// 
    class CPACSStringer
    {
    public:
        TIGL_EXPORT CPACSStringer(CCPACSStringersAssembly* parent, CTiglUIDManager* uidMgr);

        TIGL_EXPORT virtual ~CPACSStringer();

        TIGL_EXPORT CCPACSStringersAssembly* GetParent();

        TIGL_EXPORT const CCPACSStringersAssembly* GetParent() const;

        TIGL_EXPORT CTiglUIDManager& GetUIDManager();
        TIGL_EXPORT const CTiglUIDManager& GetUIDManager() const;

        TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
        TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;

        TIGL_EXPORT virtual const std::string& GetUID() const;
        TIGL_EXPORT virtual void SetUID(const std::string& value);

        TIGL_EXPORT virtual const std::vector<unique_ptr<CCPACSFuselageStringerFramePosition> >& GetStringerPositions() const;
        TIGL_EXPORT virtual std::vector<unique_ptr<CCPACSFuselageStringerFramePosition> >& GetStringerPositions();

        TIGL_EXPORT virtual CCPACSFuselageStringerFramePosition& AddStringerPosition();
        TIGL_EXPORT virtual void RemoveStringerPosition(CCPACSFuselageStringerFramePosition& ref);

    protected:
        CCPACSStringersAssembly* m_parent;

        CTiglUIDManager* m_uidMgr;

        std::string                                                   m_uID;
        std::vector<unique_ptr<CCPACSFuselageStringerFramePosition> > m_stringerPositions;

    private:
#ifdef HAVE_CPP11
        CPACSStringer(const CPACSStringer&) = delete;
        CPACSStringer& operator=(const CPACSStringer&) = delete;

        CPACSStringer(CPACSStringer&&) = delete;
        CPACSStringer& operator=(CPACSStringer&&) = delete;
#else
        CPACSStringer(const CPACSStringer&);
        CPACSStringer& operator=(const CPACSStringer&);
#endif
    };
} // namespace generated

// CPACSStringer is customized, use type CCPACSFuselageStringer directly
} // namespace tigl

/*
 * Copyright (C) 2022 Open Source Robotics Foundation
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
 *
 */

#ifndef IGNITION_TRANSPORT__CONFIG_HH_
#define IGNITION_TRANSPORT__CONFIG_HH_

#include <gz/transport/config.hh>

#define IGNITION_TRANSPORT_MAJOR_VERSION GZ_TRANSPORT_MAJOR_VERSION
#define IGNITION_TRANSPORT_MINOR_VERSION GZ_TRANSPORT_MINOR_VERSION
#define IGNITION_TRANSPORT_PATCH_VERSION GZ_TRANSPORT_PATCH_VERSION

#define IGNITION_TRANSPORT_VERSION GZ_TRANSPORT_VERSION
#define IGNITION_TRANSPORT_VERSION_FULL GZ_TRANSPORT_VERSION_FULL

#define IGNITION_TRANSPORT_VERSION_NAMESPACE GZ_TRANSPORT_VERSION_NAMESPACE

#define IGNITION_TRANSPORT_VERSION_HEADER GZ_TRANSPORT_VERSION_HEADER

namespace gz
{
}

namespace ignition
{
  #ifndef SUPPRESS_IGNITION_HEADER_DEPRECATION
    #pragma message("ignition namespace is deprecated! Use gz instead!")
  #endif
  using namespace gz;
}

#endif

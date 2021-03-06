// Copyright 2016 Peter Jankuliak
// 
// Licensed under the Apache License, Version 2.0 (the "License");
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

#ifndef CLUB_LOG_OUTPUT_H
#define CLUB_LOG_OUTPUT_H

#include <iostream>

namespace club {

#ifndef __ANDROID__
inline void log(const std::string& s) { 
  std::cout << s << std::endl;
}
#else
#include <android/log.h>
inline void log(const std::string& s) {
  __android_log_print(ANDROID_LOG_DEBUG, "Club", "%s", s.c_str());
}
#endif

} // namespace

#endif // CLUB_LOG_OUTPUT_H

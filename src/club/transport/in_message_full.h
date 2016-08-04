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

#ifndef CLUB_TRANSPORT_IN_MESSAGE_FULL_H
#define CLUB_TRANSPORT_IN_MESSAGE_FULL_H

namespace club { namespace transport {

struct InMessageFull {
  const uuid                      source;
  const MessageType               type;
  const SequenceNumber            sequence_number;
        size_t                    size;
        boost::asio::const_buffer payload;
        boost::asio::const_buffer type_and_payload;

  InMessageFull( uuid                      source
               , MessageType               type
               , SequenceNumber            sequence_number
               , size_t                    size
               , boost::asio::const_buffer payload
               , boost::asio::const_buffer type_and_payload)
    : source(std::move(source))
    , type(type)
    , sequence_number(sequence_number)
    , size(size)
    , payload(payload)
    , type_and_payload(type_and_payload)
  {}
};


}} // club::transport namespace

#endif // ifndef CLUB_TRANSPORT_IN_MESSAGE_FULL_H

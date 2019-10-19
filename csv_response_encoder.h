/*

CSV response encoder.

Copyright (C) 2018 Sergey Kolevatov

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program. If not, see <http://www.gnu.org/licenses/>.

*/

// $Revision: 12187 $ $Date:: 2019-10-18 #$ $Author: serge $

#ifndef LIB_USER_REG_PROTOCOL__CSV_RESPONSE_ENCODER_H
#define LIB_USER_REG_PROTOCOL__CSV_RESPONSE_ENCODER_H

#include "user_reg_protocol.h"      // RegisterUserResponse, ...
#include <sstream>                  // std::ostream

namespace user_reg_protocol {

class CsvResponseEncoder
{
public:
    static std::ostream & write( std::ostream & os, const User & r );
    static std::string to_csv( const generic_protocol::BackwardMessage & r );
    static std::string to_csv( const RegisterUserResponse & r );
};

} // namespace user_reg_protocol

#endif // LIB_USER_REG_PROTOCOL__CSV_RESPONSE_ENCODER_H
